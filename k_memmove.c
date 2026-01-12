
#include "libk.h"

void *k_memmove(void *dst, const void *src, size_t n) {
  if (dst == src || n == 0)
    return dst;

  unsigned char *d;
  const unsigned char *s;

  d = (unsigned char *)dst;
  s = (const unsigned char *)src;

  if (d > s) {
    while (n--)
      d[n] = s[n];
  } else {
    for (size_t i = 0; i < n; i++)
      d[i] = s[i];
  }

  return dst;
}
