#include "libk.h"
#include <unistd.h>

void k_putchar(char c) { write(1, &c, 1); }
