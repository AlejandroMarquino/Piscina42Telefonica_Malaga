#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
    printf("%d", ft_str_is_lowercase("abcdefghijklmnopqrstuvwyz"));
    printf("\n%d", ft_str_is_lowercase("aBcDeF"));
}