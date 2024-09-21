#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main() {
    char c = '5';
    printf("Standard isdigit('%c'): %d\n", c, isdigit(c));  // Should print 1
    printf("ft_isdigit('%c'): %d\n", c, ft_isdigit(c));  // Should print 1
    
    c = 'A';
    printf("Standard isdigit('%c'): %d\n", c, isdigit(c));  // Should print 0
    printf("ft_isdigit('%c'): %d\n", c, ft_isdigit(c));  // Should print 0
    
    return 0;
}
