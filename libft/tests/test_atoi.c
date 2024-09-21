#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int ft_atoi(const char *str);
void ft_putnbr(int nb);
void ft_putstr(char *str);
void check_result(char *str);

int main(void)
{
    char *test_cases[] = 
    {
        "42",
        "   -42",
        "   +42",
        "   2147483647",
        "   -2147483648",
        "2147483648",
        "-2147483649",
        "0",
        "-0",
        "   123abc456",
        "abc",
        "   +0000001234",
        "   -00123",
        "   \t\n\v\f\r 567",
        "",
        NULL
    };

    int i = 0;
    while (test_cases[i] != NULL)
    {
        int my_result = ft_atoi(test_cases[i]);
        int real_result = atoi(test_cases[i]);

        printf("Test case: \"%s\"\n", test_cases[i]);
        printf("ft_atoi: %d, atoi: %d\n", my_result, real_result);

        if (my_result == real_result)
            printf("yessss, results match\n");
        else
            printf("noot, results differ!\n");

        printf("----------------------------\n");
        i++;
    }

    return (0);
}