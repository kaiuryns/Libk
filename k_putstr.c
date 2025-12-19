#include "libk.h"

void k_putstr(const char *s) {
  if (!s)
    return;

  while (*s) {
    k_putchar(*s++);
  }
}
