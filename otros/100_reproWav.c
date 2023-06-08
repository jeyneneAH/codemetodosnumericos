#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sndfile.h>
#include <ao/ao.h>

#define BITS_PER_SAMPLE 16

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    
    const char *filename = argv[1];

    // Abrir el archivo WAV
    SF_INFO sfinfo;
    SNDFILE *sndfile = sf_open(filename, SFM_READ, &sfinfo);
    if (!sndfile) {
        printf("Error al abrir el archivo '%s'\n", filename);
        return 1;
    }

    // Configurar el dispositivo de audio
    ao_initialize();
    int driver = ao_default_driver_id();
    ao_sample_format format;
    format.bits = BITS_PER_SAMPLE;
    format.channels = sfinfo.channels;
    format.rate = sfinfo.samplerate;
    format.byte_format = AO_FMT_LITTLE;
    ao_device *device = ao_open_live(driver, &format, NULL);
    if (!device) {
        printf("Error al abrir el dispositivo de audio\n");
        sf_close(sndfile);
        ao_shutdown();
        return 1;
    }

    // Leer los datos de audio del archivo WAV
    const int numFrames = sfinfo.frames;
    short* audioData = (short*)malloc(numFrames * sizeof(short));
    if (!audioData) {
        printf("Error al reservar memoria para los datos de audio\n");
        sf_close(sndfile);
        ao_close(device);
        ao_shutdown();
        return 1;
    }
    const int numReadFrames = sf_read_short(sndfile, audioData, numFrames);
    if (numReadFrames != numFrames) {
        printf("Error al leer los datos de audio del archivo\n");
        free(audioData);
        sf_close(sndfile);
        ao_close(device);
        ao_shutdown();
        return 1;
    }

    // Reproducir los datos de audio
    const int numSamples = numFrames * sfinfo.channels;
    const int numBytes = numSamples * (BITS_PER_SAMPLE / 8);
    ao_play(device, (char*)audioData, numBytes);

    // Limpiar y cerrar todo
    free(audioData);
    sf_close(sndfile);
    ao_close(device);
    ao_shutdown();
    return 0;
}