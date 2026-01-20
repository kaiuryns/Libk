#include "libk.h"
#include <unistd.h>

void k_putstr(const char *s) {
  size_t len = 0;
  while (s[len])
    len++;

  write(1, s, len);
}
