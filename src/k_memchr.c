#include "libk.h"
void *k_memchr(const void *s, int c, size_t n) {
  const unsigned char *byte = s;

  for (size_t i = 0; i < n; i++) {
    if (byte[i] == (unsigned char)c)
      return (void *)&byte[i];
  }

  return NULL;
}
