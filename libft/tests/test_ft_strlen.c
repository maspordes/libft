#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    const char *str = "Hello, World!";
    printf("Standard strlen result: %zu\n", strlen(str));  // Should print length
    printf("ft_strlen result: %zu\n", ft_strlen(str));  // Should print length
    
    return 0;
}
