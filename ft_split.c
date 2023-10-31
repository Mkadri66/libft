/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:56:58 by mkadri            #+#    #+#             */
/*   Updated: 2023/10/26 22:02:02 by mkadri           ###   ########.fr       */
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

// static char *insert_words(char const *s, int start, int finish)
// {

// }
char    **ft_split(char const *s, char c)
{
    char    **str_splited;
    int    words;
    int     i;
    int        word_len;
    int     index_str_splited;

    i = 0;
    word_len = 0;
    index_str_splited = 0;
    words = count_words(s, c);
    str_splited = (char **)malloc((words + 1) * sizeof(char *));
    if(!str_splited)
        return(0);
    while(s[i] != '\0')
    {
        if(s[i] != c)
        {
            word_len++;
        } else if (word_len > 0) {
            str_splited[index_str_splited] = (char *)malloc((word_len + 1) * sizeof(char));
			str_splited[index_str_splited] = ft_strlcpy(str_splited[index_str_splited], s[i - word_len], word_len);
            word_len = 0;
            index_str_splited++;
        }
        i++;
    }
    if (word_len > 0) {
        str_splited[index_str_splited] = (char *)malloc((word_len + 1) * sizeof(char));
    }
    return (str_splited);
}
// int main() {
//     char input_string[] = ".Bonjour.a.tous";
//     char delimiter = '.';
    
//     char **result = ft_split(input_string, delimiter);

//     if (result == NULL) {
//         fprintf(stderr, "Erreur lors de la division de la chaîne.\n");
//         return 1;
//     }

//     // Afficher les mots séparément
//     for (int i = 0; result[i] != NULL; i++) {
//         printf("Mot %d : %s\n", i, result[i]);
//         free(result[i]);  // Libérer la mémoire allouée pour chaque mot
//     }

//     free(result);  // Libérer la mémoire allouée pour le tableau de mots

//     return 0;
// }