#include "libk.h"

char *k_strncpy(char *dst, const char *src, size_t n) {
  char *start = dst;

  while (n-- && *src)
    *dst++ = *src++;

  while (n--)
    *dst++ = '\0';

  return start;
}
