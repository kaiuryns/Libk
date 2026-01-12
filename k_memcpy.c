#include "libk.h"

void *k_memcpy(void *dst, const void *src, size_t n) {
  const unsigned char *s = src;
  unsigned char *d = dst;

  for (size_t i = 0; i < n; i++) {
    d[i] = s[i];
  }

  return dst;
}
