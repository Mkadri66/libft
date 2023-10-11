/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:15:34 by mkadri            #+#    #+#             */
/*   Updated: 2023/10/11 17:51:31 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>

/* LIBC Functions */

void		*ft_memset(void *array, int value, size_t count);
char		*ft_strchr(const char *str, int searched_char);
char        *ft_strrchr(const char *str, int searched_char);
size_t		ft_strlen(const char *str);
int			ft_atoi(const char *str);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_tolower(int character);
int			ft_toupper(int character);
int			ft_strncmp(const char *first, const char *second, size_t lenght);

#endif
