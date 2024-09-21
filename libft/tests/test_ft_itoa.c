#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main() {
    int num = 42;
    char *result = ft_itoa(num);

    printf("ft_itoa result: %s\n", result);  // Should print "42"
    free(result);
    return 0;
}
