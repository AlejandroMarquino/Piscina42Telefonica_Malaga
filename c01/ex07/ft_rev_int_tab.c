/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarqui <almarqui@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:55:43 by almarqui          #+#    #+#             */
/*   Updated: 2022/10/31 12:13:47 by almarqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	s;

	i = 0;
	while (i < (size / 2))
	{
		s = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = s;
		i++;
	}
}
