#include "libk.h"

void *k_memmove(void *dst, const void *src, size_t n) {
  unsigned char *d;
  const unsigned char *s;

  if (!dst || !src || n == 0)
    return dst;

  d = (unsigned char *)dst;
  s = (const unsigned char *)src;

  if (d < s) {
    for (size_t i = 0; i < n; i++)
      d[i] = s[i];
  } else {
    while (n--)
      d[n] = s[n];
  }

  return dst;
}
