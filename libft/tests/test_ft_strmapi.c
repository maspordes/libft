#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char example_func(unsigned int i, char c) {
    return c + i;  // Example transformation
}

int main() {
    const char *str = "abc";
    char *result = ft_strmapi(str, example_func);

    printf("ft_strmapi result: %s\n", result);  // Should print transformed string
    free(result);
    return 0;
}
