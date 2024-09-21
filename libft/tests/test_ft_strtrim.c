#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    const char *str = "   Hello, World!   ";
    const char *set = " ";
    char *trimmed = ft_strtrim(str, set);

    printf("ft_strtrim result: '%s'\n", trimmed);  // Should print "'Hello, World!'"
    free(trimmed);
    return 0;
}
