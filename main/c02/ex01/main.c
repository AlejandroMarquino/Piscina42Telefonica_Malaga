#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
	{
		char src[] = "cdn d txt rgnl";
		char dest[] = "cadena de texto de destino"; 
		unsigned	int	n;

		n = 10;

		printf("Primera cadena src: %s \n\t des: %s \n", src, dest);

		ft_strncpy(dest, src, n);

		printf("Segunda cadena src: %s \n\t des: %s \n", src, dest);
	   	return (0);
	}	
