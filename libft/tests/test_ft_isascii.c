#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main() {
    char c = 65;  // 'A'
    printf("Standard isascii('%c'): %d\n", c, isascii(c));  // Should print 1
    printf("ft_isascii('%c'): %d\n", c, ft_isascii(c));  // Should print 1
    
    c = 128;  // Non-ASCII
    printf("Standard isascii('%c'): %d\n", c, isascii(c));  // Should print 0
    printf("ft_isascii('%c'): %d\n", c, ft_isascii(c));  // Should print 0
    
    return 0;
}
