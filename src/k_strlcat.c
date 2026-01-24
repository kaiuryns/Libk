#include "libk.h"

size_t k_strlcat(char *dst, const char *src, size_t dstsize) {
  size_t dst_len = 0;
  size_t src_len = k_strlen(src);

  while (dst_len < dstsize && dst[dst_len])
    dst_len++;

  if (dst_len == dstsize)
    return dstsize + src_len;

  size_t i = 0;
  while (src[i] && (dst_len + i + 1) < dstsize) {
    dst[dst_len + i] = src[i];
    i++;
  }

  dst[dst_len + i] = '\0';
  return dst_len + src_len;
}
