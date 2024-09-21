#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    char dest1[20];
    char dest2[20];
    const char *src = "Hello, World!";

    printf("ft_strlcpy result: %zu\n", ft_strlcpy(dest1, src, sizeof(dest1)));
    printf("After ft_strlcpy: %s\n", dest1);  // Should print "Hello, World!"

    printf("Standard strlcpy result: %zu\n", strlcpy(dest2, src, sizeof(dest2)));
    printf("After strlcpy: %s\n", dest2);  // Should also print "Hello, World!"
    
    return 0;
}
