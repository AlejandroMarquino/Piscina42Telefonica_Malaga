#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a = 500;
    int b = 176;

    int *div = &a;
    int *mod = &b;

    ft_div_mod(a, b, div, mod);

    printf("%d \n", *div);
    printf("%d", *mod);

}