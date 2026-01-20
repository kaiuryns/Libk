#include "libk.h"

void k_bzero(void *s, size_t n) {
  unsigned char *bytes = s;

  for (size_t i = 0; i < n; i++) {
    bytes[i] = 0;
  }
}
