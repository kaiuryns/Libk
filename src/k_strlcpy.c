#include "libk.h"

size_t k_strlcpy(char *dst, const char *src, size_t dstsize) {
  size_t len = k_strlen(src);

  if (!dstsize)
    return len;

  while (*src && dstsize > 1) {
    *dst++ = *src++;
    dstsize--;
  }

  *dst = '\0';
  return len;
}
