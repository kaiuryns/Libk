#include "libk.h"

size_t k_strlen(const char *s) {
  if (!s)
    return 0;

  size_t len = 0;

  while (*s++) {
    len++;
  }
  return len;
}
