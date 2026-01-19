#include "libk.h"
#include <stdlib.h>

char *k_strjoin(const char *s1, const char *s2) {
  char *ptr = malloc(k_strlen(s1) + k_strlen(s2) + 1);

  if (!ptr)
    return NULL;

  k_strcpy(ptr, s1);
  return k_strcat(ptr, s2);
}
