#include <stdio.h>
#include <lame/lame.h>

int main() {
  const char* in_filename = "/home/jorge/PracticasZamora/audioSalida.wav";
  const char* out_filename = "audioConvertido.mp3";

  // initialize the LAME library
  lame_t lame = lame_init();
  lame_set_num_channels(lame, 2);
  lame_set_in_samplerate(lame, 44100);
  lame_set_VBR(lame, vbr_default);
  lame_init_params(lame);

  // open the input and output files
  FILE* in_file = fopen(in_filename, "rb");
  FILE* out_file = fopen(out_filename, "wb");

  // read and convert the audio data
  const int PCM_SIZE = 8192;
  const int MP3_SIZE = PCM_SIZE * 1.25 + 7200;
  short pcm_buffer[PCM_SIZE * 2];
  unsigned char mp3_buffer[MP3_SIZE];
  int read, write;
  do {
    read = fread(pcm_buffer, 2*sizeof(short), PCM_SIZE, in_file);
    if (read == 0) write = lame_encode_flush(lame, mp3_buffer, MP3_SIZE);
    else write = lame_encode_buffer_interleaved(lame, pcm_buffer, read, mp3_buffer, MP3_SIZE);
    fwrite(mp3_buffer, write, 1, out_file);
  } while (read != 0);

  // clean up and exit
  fclose(in_file);
  fclose(out_file);
  lame_close(lame);
  return 0;
}