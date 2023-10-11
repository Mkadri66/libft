/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:28:17 by mkadri            #+#    #+#             */
/*   Updated: 2023/10/07 14:09:45 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	
}
*/

int	main()
{
	char dest[25] = "Hello";
	char *src = "World";

	printf("%d", strlcpy(dest, src, 6));
}