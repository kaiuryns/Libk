#include "libk.h"

char *k_strcpy(char *dst, const char *src) {
  char *start = dst;

  while ((*dst++ = *src++))
    ;

  return start;
}
