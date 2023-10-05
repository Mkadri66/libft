/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:53:41 by mkadri            #+#    #+#             */
/*   Updated: 2023/10/04 18:53:43 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h> 

char	*ft_strchr(const char *str, int searched_char)
{
	while (*str != '\0')
	{
		if (*str == searched_char)
		{
			return ((char *) str);
		}
		str++;
	}
	return (0);
}
/*
int	main()
{
	char *text = "Bonjour";

	printf("%s \n", ft_strchr(text, 'u'));
	printf("%s \n", strchr(text, 'u'));
}
*/