#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    printf("%d", ft_str_is_uppercase("abcdefghijklmnopqrstuvwyz"));
    printf("\n%d", ft_str_is_uppercase("ABCDEF"));
}