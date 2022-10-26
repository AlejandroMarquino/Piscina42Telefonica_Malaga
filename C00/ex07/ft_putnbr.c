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
	if (nb == -2147483649)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putchar(147483648);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb > 9)
		{
			ft_putchar(nb / 10);
			ft_putchar(nb % 10);
		}
		else
		{
			ft_putchar(nb + 48);
		}
	}
}

// int main(void)
// {
// 	ft_putnbr(2147483647);
// 	return (0);
// }
