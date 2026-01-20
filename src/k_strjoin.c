#include "libk.h"
#include <stdlib.h>

char *k_strjoin(const char *s1, const char *s2) {
  size_t len = 0;
  size_t i = 0;

  while (s1[i] || s2[i]) {
    if (s1[i])
      len++;

    if (s2[i])
      len++;

    i++;
  }

  char *ptr = malloc(len + 1);

  if (!ptr)
    return NULL;

  char *start = ptr;

  while (*s1)
    *ptr++ = *s1++;

  while (*s2)
    *ptr++ = *s2++;

  *ptr = '\0';

  return start;
}
