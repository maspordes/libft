#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    char str1[10] = "Hello";
    char str2[10] = "Hello";
    
    ft_bzero(str1, 5);
    bzero(str2, 5);
    
    printf("ft_bzero result: \"%s\"\n", str1);  // Should print empty string
    printf("Standard bzero result: \"%s\"\n", str2);  // Should also print empty string
    
    return 0;
}
