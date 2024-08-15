#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

// Memory manipulation functions
void *ft_memset(void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);

// String functions
size_t ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strdup(const char *s1);
char *ft_strsub(const char *s, unsigned int start, size_t len);
char *ft_strtrim(const char *s1, const char *set);
char **ft_split(const char *s, char c);
char *ft_strjoin(const char *s1, const char *s2);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strmapi(const char *s, char (*f)(unsigned int, char));

// Character functions
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);

// Conversion functions
int ft_atoi(const char *str);
char *ft_itoa(int n);

// Output functions
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

#endif // LIBFT_H
