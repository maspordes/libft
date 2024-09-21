#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    const char *haystack = "Hello, World!";
    const char *needle = "World";

    char *result1 = strnstr(haystack, needle, 15);
    char *result2 = ft_strnstr(haystack, needle, 15);

    printf("Standard strnstr result: %s\n", result1);  // Should print "World!"
    printf("ft_strnstr result: %s\n", result2);  // Should print "World!"
    
    return 0;
}
