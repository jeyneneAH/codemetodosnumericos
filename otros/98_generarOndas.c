#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <portaudio.h>
#define M_PI 3.141592

#define SAMPLE_RATE  (44100)
#define FRAMES_PER_BUFFER (512)
#define NUM_SECONDS     (5)
#define NUM_CHANNELS    (2)
#define DITHER_FLAG     (paDitherOff)

typedef struct {
    float* data;
    int num_samples;
    int current_index;
} audio_data;

static int audio_callback(const void* inputBuffer, void* outputBuffer,
                          unsigned long framesPerBuffer,
                          const PaStreamCallbackTimeInfo* timeInfo,
                          PaStreamCallbackFlags statusFlags, void* userData) {
    audio_data* audio = (audio_data*)userData;
    float* out = (float*)outputBuffer;
    unsigned int i;
    (void)inputBuffer;

    for (i = 0; i < framesPerBuffer; i++) {
        if (audio->current_index < audio->num_samples) {
            *out++ = audio->data[audio->current_index++];
            if (NUM_CHANNELS == 2) *out++ = audio->data[audio->current_index++];
        } else {
            *out++ = 0;
            if (NUM_CHANNELS == 2) *out++ = 0;
        }
    }
    return paContinue;
}

int main(int argc, char* argv[]) {
    PaStream* stream;
    PaError err;
    audio_data audio = {0};
    float* data;
    int num_samples, i;

    if (argc != 2) {
        printf("Usage: %s <frequency>\n", argv[0]);
        return 1;
    }

    float frequency = atof(argv[1]);

    num_samples = SAMPLE_RATE * NUM_SECONDS;
    data = (float*)malloc(num_samples * sizeof(float));

    for (i = 0; i < num_samples; i++) {
        data[i] = sin(2 * M_PI * frequency * i / SAMPLE_RATE);
    }

    audio.data = data;
    audio.num_samples = num_samples;
    audio.current_index = 0;

    err = Pa_Initialize();
    if (err != paNoError) goto error;

    err = Pa_OpenDefaultStream(&stream, 0, NUM_CHANNELS, paFloat32,
                               SAMPLE_RATE, FRAMES_PER_BUFFER, audio_callback,
                               &audio);
    if (err != paNoError) goto error;

    err = Pa_StartStream(stream);
    if (err != paNoError) goto error;

    Pa_Sleep(NUM_SECONDS * 1000);

    err = Pa_StopStream(stream);
    if (err != paNoError) goto error;

    err = Pa_CloseStream(stream);
    if (err != paNoError) goto error;

    Pa_Terminate();

    free(data);
    return 0;

error:
    fprintf(stderr, "An error occurred while using the portaudio stream\n");
    fprintf(stderr, "Error number: %d\n", err);
    fprintf(stderr, "Error message: %s\n", Pa_GetErrorText(err));
    Pa_Terminate();
    free(data);
    return 1;
}
