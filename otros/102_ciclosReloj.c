#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_SIZE 10000

static inline uint64_t rdtsc() {
    uint32_t lo, hi;
    __asm__ volatile("rdtsc" : "=a" (lo), "=d" (hi));
    return ((uint64_t)hi << 32) | lo;
}
int main() {
    const char* command = "/usr/bin/xdg-open /opt/brave.com/brave/brave.sh";
    int* array = (int*)malloc(sizeof(int) * ARRAY_SIZE);
    srand(time(NULL));
    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = rand() % ARRAY_SIZE;
    }
    uint64_t start = rdtsc();
    int result = system(command);
    uint64_t end = rdtsc();
    uint64_t cycles = end - start;
    uint64_t hits = 0;
    uint64_t misses = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        int value = array[i];
        if (array[value] == value) {
            hits++;
        } else {
            misses++;
        }
    }
    printf("Ciclos de reloj utilizados: %lu\n", cycles);
    printf("Hits: %lu\n", hits);
    printf("Misses: %lu\n", misses);
    free(array);

    return 0;
}