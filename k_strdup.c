#include "libk.h"
#include <stdlib.h>

char *k_strdup(const char *s) {
  size_t len = k_strlen(s);

  char *ptr = malloc(len + 1);

  if (!ptr)
    return NULL;

  return k_strcpy(ptr, s);
}
