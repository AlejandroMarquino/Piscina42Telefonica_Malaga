#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src);

int main()
{

char src[] = "Alejandro Marquino";
char dest[] = "Marquino";

printf("%s", ft_strcpy(src, dest));
}