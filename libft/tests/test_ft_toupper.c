#include <stdio.h>
#include "libft.h"

int main() {
    char lower = 'a';
    char upper = ft_toupper(lower);

    printf("ft_toupper result for '%c': '%c'\n", lower, upper);  // Should print 'A'

    lower = 'A';
    upper = ft_toupper(lower);
    printf("ft_toupper result for '%c': '%c'\n", lower, upper);  // Should print 'A' (no change)

    return 0;
}
