#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    const char *str = "Hello, World!";
    char *result1 = strrchr(str, 'o');
    char *result2 = ft_strrchr(str, 'o');

    printf("Standard strrchr result: %s\n", result1);  // Should print "o, World!"
    printf("ft_strrchr result: %s\n", result2);  // Should print "o, World!"
    
    return 0;
}
