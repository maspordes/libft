#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *ptr1 = (const unsigned char *)s1;
    const unsigned char *ptr2 = (const unsigned char *)s2;

    while (n--)
    {
        if (*ptr1 != *ptr2)
            return (*ptr1 - *ptr2);
        ptr1++;
        ptr2++;
    }
    return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    const char *str1 = "Hello";
    const char *str2 = "Hello";
    const char *str3 = "Hello, World!";
    size_t n = 5;

    int result_ft = ft_memcmp(str1, str2, n);
    int result_std = memcmp(str1, str2, n);
    printf("Comparing \"%s\" and \"%s\":\n", str1, str2);
    printf("ft_memcmp: %d\n", result_ft);
    printf("memcmp: %d\n", result_std);

    result_ft = ft_memcmp(str1, str3, n);
    result_std = memcmp(str1, str3, n);
    printf("Comparing \"%s\" and \"%s\":\n", str1, str3);
    printf("ft_memcmp: %d\n", result_ft);
    printf("memcmp: %d\n", result_std);

    return 0;
}
*/