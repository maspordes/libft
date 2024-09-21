#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    printf("Standard memcmp: %d\n", memcmp(str1, str2, 5));  // Should print 0
    printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, 5));  // Should print 0

    str2[1] = 'a';  // Change one character
    printf("Standard memcmp: %d\n", memcmp(str1, str2, 5));  // Should print non-zero
    printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, 5));  // Should print non-zero

    return 0;
}
