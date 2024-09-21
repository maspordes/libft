#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    char dest1[20] = "Hello, ";
    char dest2[20] = "Hello, ";
    const char *src = "World!";

    printf("ft_strlcat result: %zu\n", ft_strlcat(dest1, src, sizeof(dest1)));
    printf("After ft_strlcat: %s\n", dest1);  // Should print "Hello, World!"

    printf("Standard strlcat result: %zu\n", strlcat(dest2, src, sizeof(dest2)));
    printf("After strlcat: %s\n", dest2);  // Should also print "Hello, World!"
    
    return 0;
}
