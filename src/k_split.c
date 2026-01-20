#include "libk.h"
#include <stdlib.h>

char **k_split(const char *s, char c) {
  size_t words = 0;

  for (size_t i = 0; s[i]; i++)
    if (s[i] != c && (i == 0 || s[i - 1] == c))
      words++;

  char **ptr = malloc((words + 1) * sizeof(char *));

  if (!ptr)
    return NULL;

  size_t word = 0;

  for (size_t j = 0; s[j];) {
    if (s[j] != c) {
      size_t len = 0;
      size_t start = j;

      while (s[j] && s[j] != c) {
        len++;
        j++;
      }

      ptr[word] = malloc(len + 1);

      if (!ptr[word]) {
        for (size_t k = 0; k < word; k++)
          free(ptr[k]);

        free(ptr);
        return NULL;
      }

      for (size_t l = 0; l < len; l++) {
        ptr[word][l] = s[start + l];
      }

      ptr[word][len] = '\0';
      word++;
    } else {
      j++;
    }
  }
  ptr[word] = NULL;
  return ptr;
}
