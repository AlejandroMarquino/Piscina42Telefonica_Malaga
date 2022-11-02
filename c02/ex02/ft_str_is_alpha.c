/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarqui <almarqui@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:20:56 by almarqui          #+#    #+#             */
/*   Updated: 2022/11/02 11:46:23 by almarqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == 0)
	{
		return (1);
	}
	while (str[i] != 0)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str [i] >= 'a' && str [i]))
			i++;
		else
			return (0);
	}
	return (1);
}
