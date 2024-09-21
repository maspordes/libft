#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main() {
    char c = 'A';
    printf("Standard tolower('%c'): %c\n", c, tolower(c));  // Should print 'a'
    printf("ft_tolower('%c'): %c\n", c, ft_tolower(c));  // Should print 'a'
    
    return 0;
}
