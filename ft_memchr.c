/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:55:25 by mkadri            #+#    #+#             */
/*   Updated: 2023/10/11 18:07:45 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memory_block, int searched_char, size_t size)
{
	size_t	i;
	
	i = 0;

	while( i < size)
	{
		if( *(unsigned char*)memory_block[i] == (unsigned char)searched_char)
		{
			return(1);
		}
		i++;
	}
	return(0);
}


int	main()
{
	char array [] = "Salut";


	int i = 0;
	
	ft_memchr(array, 'u', 5);
	//memchr(array,5,6);

	while(i < 13)
	{
		printf("%d \n", array[i]);
		i++;
	}	
		
}
