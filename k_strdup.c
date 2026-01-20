#include "libk.h"
#include <stdlib.h>

char *k_strdup(const char *s) {
  size_t len = 0;

  while (s[len])
    len++;

  char *ptr = malloc(len + 1);

  if (!ptr)
    return NULL;

  char *start = ptr;

  while ((*ptr++ = *s++))
    ;

  return start;
}
