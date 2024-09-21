#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main() {
    char c = 'A';
    printf("Standard isprint('%c'): %d\n", c, isprint(c));  // Should print 1
    printf("ft_isprint('%c'): %d\n", c, ft_isprint(c));  // Should print 1
    
    c = '\n';  // Non-printable
    printf("Standard isprint('%c'): %d\n", c, isprint(c));  // Should print 0
    printf("ft_isprint('%c'): %d\n", c, ft_isprint(c));  // Should print 0
    
    return 0;
}
