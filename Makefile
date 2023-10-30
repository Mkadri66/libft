# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkadri <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 18:45:03 by mkadri            #+#    #+#              #
#    Updated: 2023/10/30 16:38:48 by mkadri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_strchr.c ft_tolower.c ft_isascii.c ft_strlen.c \
					ft_toupper.c ft_isdigit.c ft_isprint.c ft_strrchr.c ft_memset.c ft_memchr.c ft_bzero.c ft_memcpy.c ft_strlcpy.c \
					ft_memcpy.c  ft_strlcat.c ft_memmove.c ft_strnstr.c ft_strdup.c ft_calloc.c ft_strjoin.c ft_substr.c \
					ft_strtrim.c ft_putchar_fd.c  ft_putstr_fd.c ft_putendl_fd.c ft_memcmp.c  ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_split.c \
					
OBJS			= $(SRCS:.c=.o)

BONUS			=	ft_lstnew.c ft_lstadd_front.c
					
BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus