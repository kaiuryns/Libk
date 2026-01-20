#include "libk.h"

char *k_strcat(char *dest, const char *src) {
  char *start = dest;

  while (*dest)
    dest++;

  while ((*dest++ = *src++))
    ;

  return start;
}
