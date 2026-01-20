#include "libk.h"

void *k_memset(void *s, int c, size_t n) {
  unsigned char *bytes = s;

  for (size_t i = 0; i < n; i++) {
    bytes[i] = (unsigned char)c;
  }

  return s;
}
