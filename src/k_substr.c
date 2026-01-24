#include "libk.h"
#include <stdlib.h>

char *k_substr(const char *s, unsigned int start, size_t len) {
  char *ptr = malloc(len + 1);

  if (!ptr)
    return NULL;

  size_t i = 0;
  while (i < len && s[start + i]) {
    ptr[i] = s[start + i];
    i++;
  }

  ptr[i] = '\0';
  return ptr;
}
