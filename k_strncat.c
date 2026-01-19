#include "libk.h"

char *k_strncat(char *dest, const char *src, size_t n) {
  char *start = dest;

  while (*dest)
    dest++;

  while (n && *src) {
    *dest++ = *src++;
    n--;
  }
  *dest = '\0';

  return start;
}
