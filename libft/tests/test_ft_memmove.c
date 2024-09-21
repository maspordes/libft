#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    
    ft_memmove(str1 + 7, str1, 5);  // Move "Hello" to "World!"
    memmove(str2 + 7, str2, 5);  // Move "Hello" to "World!"
    
    printf("ft_memmove result: %s\n", str1);  // Should print "Hello, Hello!"
    printf("Standard memmove result: %s\n", str2);  // Should also print "Hello, Hello!"
    
    return 0;
}
