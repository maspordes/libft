#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main() {
    char c = 'A';
    printf("Standard isalnum('%c'): %d\n", c, isalnum(c));  // Should print 1
    printf("ft_isalnum('%c'): %d\n", c, ft_isalnum(c));  // Should print 1
    
    c = '!';
    printf("Standard isalnum('%c'): %d\n", c, isalnum(c));  // Should print 0
    printf("ft_isalnum('%c'): %d\n", c, ft_isalnum(c));  // Should print 0
    
    return 0;
}
