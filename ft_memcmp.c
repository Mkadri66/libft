/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:41:12 by mkadri            #+#    #+#             */
/*   Updated: 2023/10/18 14:22:35 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr_str1 = str1;
	const unsigned char	*ptr_str2 = str2;

	i = 0;
	if ((str1 == NULL && str2 == NULL) || n == 0)
		return (0);
	while ((i < n))
	{
		if (ptr_str1[i] > ptr_str2[i])
		{
			return (1);
		}
		else if (ptr_str1[i] < ptr_str2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
