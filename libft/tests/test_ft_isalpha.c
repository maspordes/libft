#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main() {
    char c = 'A';
    printf("Standard isalpha('%c'): %d\n", c, isalpha(c));  // Should print 1
    printf("ft_isalpha('%c'): %d\n", c, ft_isalpha(c));  // Should print 1
    
    c = '1';
    printf("Standard isalpha('%c'): %d\n", c, isalpha(c));  // Should print 0
    printf("ft_isalpha('%c'): %d\n", c, ft_isalpha(c));  // Should print 0
    
    return 0;
}
