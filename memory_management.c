// memory_management.c
#include "memory_management.h"

unsigned short int bytes_to_word(unsigned char byte1, unsigned char byte0) {
  return ((unsigned short int)byte1 << 8) + (unsigned short int)byte0;
}

void copy_bytes(unsigned char *destination, unsigned char *source, unsigned short int size) {
  for (unsigned short int i = 0; i < size; i++) {
    destination[i] = source[i];
  }
}

void copy_string(char *destination, char *source) {
  for (unsigned short int i = 0; source[i]; i++) {
    destination[i] = source[i];
  }
}

unsigned char *create_bytevector(unsigned short int size) {
  unsigned char *bytevector = NULL;
  assert(bytevector = calloc(size, sizeof(unsigned char)));
  return bytevector;
}

void destroy_bytevector(unsigned char *bytevector) {
  if (bytevector) free(bytevector);
  bytevector = NULL;
}

char **create_strings(unsigned short int size) {
  char **strings = NULL;
  assert(strings = calloc(size, sizeof(unsigned char *)));
  return strings;
}

void destroy_strings(char **strings, unsigned short int size) {
  unsigned short int i = size;
  if (strings) {
    while (i--) if (strings[i]) free(strings[i]);
    free(strings);
  }
}
