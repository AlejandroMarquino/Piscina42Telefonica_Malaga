#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
    int *nbr;
    int number;
	
	number =8;
    nbr = &number;
    ft_ft(nbr);
    printf("%d",*nbr);
	return 0;    
}
