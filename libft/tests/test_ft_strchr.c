#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    const char *str = "Hello, World!";
    char *result1 = strchr(str, 'W');
    char *result2 = ft_strchr(str, 'W');

    printf("Standard strchr result: %s\n", result1);  // Should print "World!"
    printf("ft_strchr result: %s\n", result2);  // Should print "World!"
    
    return 0;
}
