#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    const char str[] = "Hello, World!";
    char *result1 = memchr(str, 'o', strlen(str));
    char *result2 = ft_memchr(str, 'o', strlen(str));

    printf("Standard memchr result: %s\n", result1);  // Should print "o, World!"
    printf("ft_memchr result: %s\n", result2);  // Should print "o, World!"
    
    return 0;
}