#include <stdio.h>
#include "libft.h"

void example_func(unsigned int i, char *c) {
    *c = *c + i;  // Example transformation
}

int main() {
    char str[] = "abc";
    ft_striteri(str, example_func);

    printf("ft_striteri result: %s\n", str);  // Should print transformed string
    return 0;
}