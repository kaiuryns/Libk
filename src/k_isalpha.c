#include "libk.h"

int k_isalpha(int c) {
  return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
