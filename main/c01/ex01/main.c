#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int		main()
{
	

	int n;
	int *********nbr;
	int ********nbr2;
	int *******nbr3;
	int ******nbr4;
	int *****nbr5;
	int ****nbr6;
	int ***nbr7;
	int **nbr8;
	int *nbr9;

	n =  4;

	nbr9 = &n;
	nbr8 = &nbr9;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr = &nbr2;

	printf("%d\n", n);
	ft_ultimate_ft(nbr);
	printf("%d\n", n);
	return 0;
}
	
