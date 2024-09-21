#include <unistd.h>
#include "libft.h"

int main() {
    ft_putchar_fd('H', 1);  // Prints 'H' to stdout
    write(1, "\n", 1);      // New line for clarity
    return 0;
}
