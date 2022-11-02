#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    printf("%d", ft_str_is_alpha("abcdefghijklmnopqrstuvwyz"));
    printf("\n%d", ft_str_is_alpha("abc1efghijklmnopqrs1uvwyz"));
    printf("\n%d", ft_str_is_alpha("4631asrfdf96"));
}