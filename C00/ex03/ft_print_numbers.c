/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarqui <almarqui@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:01:11 by almarqui          #+#    #+#             */
/*   Updated: 2022/10/22 16:44:37 by almarqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		n;

	n = '0';
	while (n <= '9')
	{
		write (1, &n, 1);
		n++;
	}
}
// int main()
// {
// 	ft_print_numbers();
// 	return(0);
// }