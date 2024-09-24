#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *ptr;
    size_t          i;

    ptr = (unsigned char *)b;
    i = 0;
    while (i < len)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char str1[50] = "Hello, World!";
    char str2[50] = "Hello, World!";

    printf("Before ft_memset: %s\n", str1);
    ft_memset(str1, 'x', 5);
    printf("After ft_memset: %s\n", str1);  // Expected: "xxxxx, World!"

    printf("Before memset: %s\n", str2);
    memset(str2, 'x', 5);
    printf("After memset: %s\n", str2);  // Expected: "xxxxx, World!"

    return 0;
}