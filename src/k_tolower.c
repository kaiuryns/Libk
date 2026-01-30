#include "libk.h"

int k_tolower(int c) {
  if (c >= 'A' && c <= 'Z')
    return c + 32;

  return c;
}
