
#include "libk.h"
#include <stdlib.h>

void *k_calloc(size_t count, size_t size) {
  if (count != 0 && (count * size) / count != size)
    return NULL;

  size_t total = count * size;
  void *ptr = malloc(total);

  if (!ptr)
    return NULL;

  unsigned char *pptr = ptr;

  for (size_t i = 0; i < total; i++)
    pptr[i] = '\0';

  return ptr;
}
