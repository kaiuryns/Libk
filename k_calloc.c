
#include "libk.h"
#include <stdlib.h>

void *k_calloc(size_t count, size_t size) {
  if (count != 0 && (count * size) / count != size)
    return NULL;

  size_t total = count * size;
  void *ptr = malloc(total);

  if (!ptr)
    return NULL;

  k_bzero(ptr, total);

  return ptr;
}
