#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main() {
    const char *str = "Hello,World!";
    char **split = ft_split(str, ',');

    printf("ft_split result:\n");
    for (int i = 0; split[i]; i++) {
        printf("split[%d]: %s\n", i, split[i]);  // Should print "Hello" and "World!"
        free(split[i]);
    }
    free(split);
    return 0;
}
