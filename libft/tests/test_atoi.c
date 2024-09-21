#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main() {
    const char *str = "123";
    printf("Standard atoi: %d\n", atoi(str));
    printf("ft_atoi: %d\n", ft_atoi(str));

    str = "-456";
    printf("Standard atoi: %d\n", atoi(str));
    printf("ft_atoi: %d\n", ft_atoi(str));

    str = "abc";
    printf("Standard atoi: %d\n", atoi(str));
    printf("ft_atoi: %d\n", ft_atoi(str));
    
    return 0;
}