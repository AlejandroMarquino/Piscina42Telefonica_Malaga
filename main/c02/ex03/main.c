#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
    printf("%d", ft_str_is_numeric("1234567890"));
    printf("\n%d", ft_str_is_numeric("12er567890"));
    printf("\n%d", ft_str_is_numeric("123456789"));
}