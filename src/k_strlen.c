#include "libk.h"

size_t k_strlen(const char *s) {
  size_t len = 0;

  while (s[len])
    len++;

  return len;
}
