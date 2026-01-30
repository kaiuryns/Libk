#include "libk.h"
#include <stdlib.h>

char *k_itoa(int n) {
  long num = n;
  int neg = (n < 0);

  if (neg)
    num = -num;

  int len = 1;
  long tmp = num;

  while (tmp / 10) {
    len++;
    tmp /= 10;
  }

  if (neg)
    len++;

  char *ptr = malloc(len + 1);
  if (!ptr)
    return NULL;

  ptr[len] = '\0';

  while (len > neg) {
    ptr[--len] = (num % 10) + '0';
    num /= 10;
  }

  if (neg)
    ptr[0] = '-';

  return ptr;
}
