#include "libk.h"

int k_memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *byte1 = s1;
  const unsigned char *byte2 = s2;

  for (size_t i = 0; i < n; i++) {
    if (byte1[i] != byte2[i])
      return byte1[i] - byte2[i];
  }

  return 0;
}
