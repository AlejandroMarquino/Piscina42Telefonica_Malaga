/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarqui <almarqui@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:53:59 by almarqui          #+#    #+#             */
/*   Updated: 2022/10/24 17:54:11 by almarqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	rest;

	if (nb == -2147483648)
	{
		nb = 147483648;
		write(1, "-2", 2);
		ft_putnbr(nb);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb >= 10)
	{
		rest = nb % 10 + 48;
		nb = nb / 10;
		ft_putnbr(nb);
		ft_putchar(rest);
	}
	else if (nb != 0)
		ft_putchar(nb + 48);
}
// int main(void)
// {

// 	ft_putnbr(-100);
// 	ft_putnbr(1030);

// 	return (0);
// }