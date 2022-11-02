#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int x = 10;
    int y = 5;
    int *a = &x;
    int *b = &y;

    printf("%d / ", x);
    printf("%d\n", y);

    ft_ultimate_div_mod(a, b);

    printf("(*a) = %d\n", *a);
    printf("(*b) = %d", *b);
}