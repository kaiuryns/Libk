#include "libk.h"

void k_putstr(const char *s) {
  while (*s)
    k_putchar(*s++);
}
