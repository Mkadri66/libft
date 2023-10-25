/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:56:58 by mkadri            #+#    #+#             */
/*   Updated: 2023/10/25 18:10:02 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s, char c)
{
	int	i;
	int	words;
	
	i = 0;
	words = 0;
	if(!s || !c)
		return (0);
	while (s[i] != '\0')
	{
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            words++;
		i++;
	}
	return (words);
}


static char *copy_in_matrice(char *word, int word_length, char const *s, int i)
{
	int	j;

	j = 0;
	while(word_length > 0)
	{
		word[j] = s[i - word_length];
		word_length--;
		j++;
	}
	word[j] = '\0';
	return (word);
	
}
static char **insert_words(char const *s, char c, int nb_words, char **matrice)
{
	int		i;
	int		word_length;
	int 	matrice_index;
	
	i = 0;
	word_length = 0;
	matrice_index = 0;
	while(matrice_index < nb_words)
	{
		if(s[i] == c)
			i++;
		if(s[i] != c)
		{
			word_length++;
			i++;
		}
		matrice[matrice_index] = (char*) malloc((word_length + 1) * sizeof(char));
		if(!matrice[matrice_index])
			return(0);
		copy_in_matrice(matrice[matrice_index],word_length, s, i);
		word_length = 0;
		matrice_index++;
	}
	return(matrice);
}
char	**ft_split(char const *s, char c)
{
	char	**str_splited;
	int	words;

	words = count_words(s, c);
	str_splited = (char **)malloc((words + 1) * sizeof(char *));
	if(!str_splited)
		return(0);
	insert_words(s, c, words,str_splited);
	return (str_splited);
}
