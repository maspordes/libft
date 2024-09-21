#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    unsigned int result;

    i = 0;
    sign = 1;
    result = 0;

    // Skip whitespace
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;

    // Handle sign
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Convert the digits
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // Handle overflow for the case of 2147483648 (when sign is negative)
    if (result > 2147483648 && sign == -1)
        return (0);
    // Handle overflow for the case of 2147483647 (when sign is positive)
    if (result > 2147483647 && sign == 1)
        return (-1);

    return (result * sign);
}
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

        printf("----------------------------\n")
        i++;
    }

    return (0);
}