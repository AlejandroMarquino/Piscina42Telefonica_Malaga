void	ft_putchar(char c);

void	ft_print(/*declarar los 4 tipos de datos, barra, barra invertida, arterisco, espacio)*/
{
	int	/*nombrar la variable*/;

	/*variable*/ = 1;
	while (/*variable*/ <= x)
	{
		if (/**/)
			ft_putchar(/*imprime este dato*/);
		else if (/**/)
			ft_putchar(/*imprime este dato*/);
		else
			ft_putchar(/*imprime este dato*/);
		/*iteración variable++*/;
	}
}

void	rush(int x, int y) /* x e y corresponden a los valores del ejercicio Rush(5,3), Rush (5,1) ... */
{
    int	/*nombrar la variable*/;

	/*variable*/ = 1;
	if (x >= 1 && y >= 1 ) /* condiciones en igual o mayor porque los enunciados son números positivos*/
	{                       /* podríamos meterle un mensaje de error al usuario pero no lo pide, no es necesario, contamos que siempre son positivos, conocemos los valores*/
		while (/*variable*/)
		{
			if (/*variable*/)
				ft_print('/', '*', '\\');
			else if (/*variable*/)
				ft_print('\\', '*', '/');
			else
				ft_print('*', ' ', '*');
			/*itración variable++*/;
		}
	}
}
