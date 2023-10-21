/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:07:30 by mkadri            #+#    #+#             */
/*   Updated: 2023/10/21 19:48:38 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	i = 0;
	j = 0;
	substr = (char *) malloc (sizeof (*str) * (len + 1));
	if (!substr)
		return (NULL);
	while (str[i])
	{
		if (i >= start && j < len)
			substr[j++] = str[i];
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
