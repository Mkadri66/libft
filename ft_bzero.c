/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:27:13 by mkadri            #+#    #+#             */
/*   Updated: 2023/10/12 20:00:10 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *str, size_t str_size)
{
    unsigned int i;

    i = 0;
    if(str_size == 0)
        return;
    while( i < str_size)
    {
        ((unsigned char*)str)[i] = 0;
        i++;
    }
}


// int	main()
// {
// 	char array [] = "Salut";


// 	int i = 0;
	
// 	ft_bzero(array, 5);
// 	bzero(array);

// 	while(i < 13)
// 	{
// 		printf("%d \n", array[i]);
// 		i++;
// 	}	
// }
