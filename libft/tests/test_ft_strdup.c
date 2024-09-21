#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main() {
    const char *original = "Hello";
    char *duplicate1 = strdup(original);
    char *duplicate2 = ft_strdup(original);

    printf("Standard strdup result: %s\n", duplicate1);  // Should print "Hello"
    printf("ft_strdup result: %s\n", duplicate2);  // Should also print "Hello"
    
    free(duplicate1);
    free(duplicate2);
    return 0;
}
