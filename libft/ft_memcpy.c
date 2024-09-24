#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;

    if (!dst && !src)
        return (NULL);

    while (n--)
    {
        *d++ = *s++;
    }
    return (dst);
}
/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char src[] = "Hello, World!";
    char dst[50];

    // Using standard memcpy
    memcpy(dst, src, 13);
    dst[13] = '\0'; // Null-terminate the string
    printf("Standard memcpy: %s\n", dst);

    // Using ft_memcpy
    char dst_ft[50]; // Reset destination buffer
    ft_memcpy(dst_ft, src, 13);
    dst_ft[13] = '\0'; // Null-terminate the string
    printf("ft_memcpy: %s\n", dst_ft);

    return 0;
}
*/