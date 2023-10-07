/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:03:58 by mkadri            #+#    #+#             */
/*   Updated: 2023/10/07 14:08:53 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_isalpha(int c)
// {
// 	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
// 	{
// 		return (1);
// 	}
// 	return (0);
// }

// int	ft_isdigit(int c)
// {
// 	if ((c >= 48 && c <= 57))
// 	{
// 		return (1);
// 	}
// 	return (0);
// }

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

/*
int	main()
{
	printf("%d \n", ft_isalnum(65));
	printf("%d \n", isalnum(65));
	return(0);
}
*/