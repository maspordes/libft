#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    char dest1[20];
    char dest2[20];
    const char src[] = "Hello";
    
    ft_memcpy(dest1, src, 5);
    memcpy(dest2, src, 5);
    
    dest1[5] = '\0';  // Null-terminate
    dest2[5] = '\0';  // Null-terminate
    
    printf("ft_memcpy result: %s\n", dest1);  // Should print "Hello"
    printf("Standard memcpy result: %s\n", dest2);  // Should also print "Hello"
    
    return 0;
}
