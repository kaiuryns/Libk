#include "libk.h"

int k_atoi(const char *nptr) {
  int i = 0;

  while (k_isspace((unsigned char)nptr[i]))
    i++;

  int sign = 1;
  if (nptr[i] == '-' || nptr[i] == '+') {
    if (nptr[i] == '-')
      sign = -1;
    i++;
  }

  int number = 0;
  while (k_isdigit((unsigned char)nptr[i])) {
    number = (number * 10) + (nptr[i] - '0');
    i++;
  }
  return number * sign;
}
