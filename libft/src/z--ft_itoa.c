#include "libft.h"
char    *ft_itoa(int n)
{
    char    *str;
    long    nbr = n;
    size_t  len = (n <= 0) ? 1 : 0;

    while (nbr && ++len)
        nbr /= 10;
    nbr = n;
    if (!(str = (char *)malloc(len + 1)))
        return (NULL);
    str[len] = '\0';
    if (n < 0)
        nbr = -nbr;
    while (len--)
    {
        str[len] = (nbr % 10) + '0';
        nbr /= 10;
    }
    if (n < 0)
        str[0] = '-';
    return (str);
}
