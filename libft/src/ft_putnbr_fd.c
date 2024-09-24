#include "libft.h"
#include <stdlib.h>

void ft_putstr_fd(char *s, int fd)
{
    if (s)
        while (*s)
            write(fd, s++, 1);
}

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
/*int main() {
    int num = 42;
    ft_putbnr_fd(num, 1);  // Prints binary representation of 42 to stdout
    write(1, "\n", 1);      // New line for clarity
    return 0;
}
*/