/* ft_substr.c */
#include "libft.h"
#include <stdlib.h>

/*
 * Extract a substring from `s` starting at `start` for `len` characters.
 */
char *ft_substr(const char *s, unsigned int start, size_t len) {
    char *substr;
    size_t s_len;

    // Check if the input string is valid
    if (!s) return NULL;
    
    s_len = ft_strlen(s); // Get the length of the input string
    
    // If start is out of bounds, return an empty string
    if (start >= s_len) return ft_strdup(""); 

    // Adjust length if it exceeds the string length
    if (s_len - start < len) len = s_len - start; 

    substr = (char *)malloc(len + 1); // Allocate memory for the substring
    if (!substr) return NULL;

    ft_strlcpy(substr, s + start, len + 1); // Copy the substring to the new buffer
    return substr;
}










/* ft_strjoin.c */
#include "libft.h"
#include <stdlib.h>

/*
 * Concatenate `s1` and `s2` into a new string.
 */
char *ft_strjoin(const char *s1, const char *s2) {
    char *joined;
    size_t len1, len2;

    // Check if input strings are valid
    if (!s1 || !s2) return NULL;

    len1 = ft_strlen(s1); // Length of the first string
    len2 = ft_strlen(s2); // Length of the second string

    joined = (char *)malloc(len1 + len2 + 1); // Allocate memory for the concatenated string
    if (!joined) return NULL;

    ft_strlcpy(joined, s1, len1 + 1); // Copy the first string
    ft_strlcat(joined, s2, len1 + len2 + 1); // Concatenate the second string

    return joined;
}








/* ft_strtrim.c */
#include "libft.h"
#include <stdlib.h>

/*
 * Remove leading and trailing characters from `s1` based on `set`.
 */
char *ft_strtrim(const char *s1, const char *set) {
    char *trimmed;
    size_t start, end, len;

    // Check if input strings are valid
    if (!s1 || !set) return NULL;

    start = 0;
    // Find the start index where trimming should stop
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;

    end = ft_strlen(s1);
    // Find the end index where trimming should start
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;

    len = end - start; // Calculate length of the trimmed string
    trimmed = (char *)malloc(len + 1); // Allocate memory for the trimmed string
    if (!trimmed) return NULL;

    ft_strlcpy(trimmed, s1 + start, len + 1); // Copy the trimmed portion
    return trimmed;
}










/* ft_split.c */
#include "libft.h"
#include <stdlib.h>

/* Helper function to count the number of words */
static size_t count_words(const char *s, char c) {
    size_t count = 0;
    while (*s) {
        while (*s == c) s++;
        if (*s) {
            count++;
            while (*s && *s != c) s++;
        }
    }
    return count;
}

/* Helper function to get a word from the string */
static char *get_word(const char *s, char c) {
    size_t len = 0;
    while (s[len] && s[len] != c) len++;
    return ft_substr(s, 0, len);
}

/*
 * Split `s` into an array of strings separated by character `c`.
 */
char **ft_split(const char *s, char c) {
    char **result;
    size_t i = 0;
    size_t words_count = count_words(s, c);

    // Check if the input string is valid
    if (!s) return NULL;

    result = (char **)malloc((words_count + 1) * sizeof(char *)); // Allocate memory for the array of strings
    if (!result) return NULL;

    while (*s) {
        while (*s == c) s++;
        if (*s) {
            result[i] = get_word(s, c); // Get the next word
            if (!result[i++]) { // Check if memory allocation failed
                while (i-- > 0) free(result[i]);
                free(result);
                return NULL;
            }
            while (*s && *s != c) s++;
        }
    }
    result[i] = NULL; // Null-terminate the array
    return result;
}














/* ft_itoa.c */
#include "libft.h"
#include <stdlib.h>

/* Helper function to calculate the length of the number */
static size_t get_num_len(int n) {
    size_t len = (n <= 0) ? 1 : 0;
    while (n) {
        len++;
        n /= 10;
    }
    return len;
}

/*
 * Convert integer `n` to a string.
 */
char *ft_itoa(int n) {
    char *str;
    size_t len = get_num_len(n);
    int sign = (n < 0) ? -1 : 1;
    size_t i = len - 1;

    str = (char *)malloc(len + 1); // Allocate memory for the string
    if (!str) return NULL;

    str[len] = '\0'; // Null-terminate the string
    if (n == 0) str[0] = '0'; // Handle zero
    while (n) {
        str[i--] = (n % 10) * sign + '0'; // Convert number to string
        n /= 10;
    }
    if (sign == -1) str[0] = '-'; // Handle negative numbers

    return str;
}










/* ft_strmapi.c */
#include "libft.h"
#include <stdlib.h>

/*
 * Apply function `f` to each character of `s` and create a new string.
 */
char *ft_strmapi(const char *s, char (*f)(unsigned int, char)) {
    char *new_str;
    size_t i;

    // Check if input strings and function pointer are valid
    if (!s || !f) return NULL;

    new_str = (char *)malloc(ft_strlen(s) + 1); // Allocate memory for the new string
    if (!new_str) return NULL;

    i = 0;
    // Apply function to each character
    while (s[i]) {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[i] = '\0'; // Null-terminate the string

    return new_str;
}











/* ft_striteri.c */
#include "libft.h"

/*
 * Apply function `f` to each character of `s`, passing the index of the character.
 */
void ft_striteri(char *s, void (*f)(unsigned int, char *)) {
    unsigned int i;

    // Check if input strings and function pointer are valid
    if (!s || !f) return;

    i = 0;
    // Apply function to each character, passing index and character pointer
    while (s[i]) {
        f(i, &s[i]);
        i++;
    }
}










/* ft_putchar_fd.c */
#include "libft.h"
#include <unistd.h>

/*
 * Write character `c` to the file descriptor `fd`.
 */
void ft_putchar_fd(char c, int fd) {
    write(fd, &c, 1); // Use the write system call to output the character
}










