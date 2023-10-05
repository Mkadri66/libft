/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:15:34 by mkadri            #+#    #+#             */
/*   Updated: 2023/10/05 19:55:49 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* LIBC Functions */

int	ft_atoi(const char *str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_tolower(int character);
int	ft_toupper(int character);
int	ft_strncmp(const char *first, const char *second, size_t lenght);
	char	*ft_strchr(const char *str, int searched_char);
	size_t	ft_strlen(char *str);
#endif