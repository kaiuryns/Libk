#include "libk.h"

char *k_strchr(const char *s, int c) {
  while (*s) {
    if ((unsigned char)*s == (unsigned char)c)
      return (char *)s;
    s++;
  }

  if ((unsigned char)c == '\0')
    return (char *)s;

  return NULL;
}
