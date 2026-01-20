#include "libk.h"
#include <stdlib.h>

char *k_substr(const char *s, unsigned int start, size_t len) {
  char *ptr = malloc(len + 1);

  for (size_t i = 0; i < len; i++)
    ptr[i] = s[start + i];

  ptr[len + 1] = '\0';

  return ptr;
}
