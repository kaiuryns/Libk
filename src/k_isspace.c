#include "libk.h"

int k_isspace(int c) { return c == ' ' || (c >= '\t' && c <= '\r'); }
