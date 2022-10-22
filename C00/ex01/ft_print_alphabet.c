/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarqui <almarqui@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:00:49 by almarqui          #+#    #+#             */
/*   Updated: 2022/10/22 15:00:59 by almarqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_print_alphabet(void)
{
    char c;

    c = 'a';
    while (c <= 'z')
    {
        write (1, &c, 1);
        c++;
    }    
}

int     main ()
{
    ft_print_alphabet();
    return (0);
}
