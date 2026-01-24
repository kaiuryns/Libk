#ifndef LIBK_H
#define LIBK_H

#include <stddef.h>

void k_bzero(void *s, size_t n);
void *k_calloc(size_t count, size_t size);
int k_strcmp(const char *s1, const char *s2);
char *k_strcat(char *dest, const char *src);
char *k_strchr(const char *s, int c);
char *k_strcpy(char *dst, const char *src);
char *k_strdup(const char *s);
size_t k_strlen(const char *s);
char *k_strjoin(const char *s1, const char *s2);
size_t k_strlcat(char *dst, const char *src, size_t dstsize);
size_t k_strlcpy(char *dst, const char *src, size_t dstsize);
int k_strncmp(const char *s1, const char *s2, size_t n);
char *k_strncat(char *dest, const char *src, size_t n);
char *k_strncpy(char *dst, const char *src, size_t n);
char **k_split(const char *s, char c);
char *k_substr(const char *s, unsigned int start, size_t len);

void *k_memchr(const void *s, int c, size_t n);
int k_memcmp(const void *s1, const void *s2, size_t n);
void *k_memcpy(void *dst, const void *src, size_t n);
void *k_memmove(void *dst, const void *src, size_t n);
void *k_memset(void *s, int c, size_t n);

void k_putchar(char c);
void k_putstr(const char *s);

#endif
