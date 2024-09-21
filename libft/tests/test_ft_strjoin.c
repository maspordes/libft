#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main() {
    const char *s1 = "Hello";
    const char *s2 = " World!";
    char *result = ft_strjoin(s1, s2);

    printf("ft_strjoin result: %s\n", result);  // Should print "Hello World!"
    free(result);
    return 0;
}
