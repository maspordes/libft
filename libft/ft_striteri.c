#include "libft.h"
void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t  i;

    if (s && f)
    {
        i = 0;
        while (s[i])
        {
            f(i, &s[i]);
            i++;
        }
    }
}
/*int main() {
    char str[] = "abc";
    ft_striteri(str, example_func);

    printf("ft_striteri result: %s\n", str);  // Should print transformed string
    return 0;
}*/