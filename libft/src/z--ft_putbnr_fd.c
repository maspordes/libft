#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
    char buffer[11];  // Enough to hold INT_MIN
    int i = 10;
    unsigned int num;

    buffer[10] = '\0';
    if (n < 0)
    {
        num = -n;
        buffer[0] = '-';
    }
    else
        num = n;

    do
    {
        buffer[i--] = (num % 10) + '0';
        num /= 10;
    } while (num > 0);

    ft_putstr_fd(&buffer[i + 1], fd);
}
