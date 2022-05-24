/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:47:40 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/05/24 17:58:12 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**split_string(char const *string, char c, char **array)

{
	size_t	i;
	int		len_words;
	int		position;

	position = 0;
	len_words = 0;
	i = 0;
	if (string[i] == c)
		i++;
	while (i <= ft_strlen(string))
	{
		if ((string[i] == c && len_words != 0) || \
			(string[i] == '\0' && len_words != 0))
		{
			array[position] = ft_calloc(len_words + 1, sizeof(char *));
			ft_strlcpy(array[position], &string[i - len_words], len_words + 1);
			position++;
			len_words = 0;
		}
		else if (string[i] != c)
			len_words++;
		i++;
	}
	return (array);
}

static int	how_many_words(char const *string, char c, size_t string_len)

{
	size_t	i;
	int		count_words;
	int		len_words;

	i = 0;
	count_words = 0;
	len_words = 0;
	while (i < string_len)
	{
		if (string[i] == c && len_words != 0)
		{
			count_words++;
			len_words = 0;
		}
		else
			len_words++;
		i++;
	}
	if (len_words != 0 && count_words > 0)
		count_words++;
	return (count_words);
}

char	**ft_split(char const *string, char c)

{
	size_t	string_len;
	int		count_words;
	char	**array_words;
	char	**array_of_strings;

	if (!(string))
		return (NULL);
	if (c == '\0')
	{
		array_of_strings = malloc(1 * sizeof(*array_of_strings));
		array_of_strings[0] = NULL;
		return (array_of_strings);
	}
	string_len = ft_strlen(string);
	count_words = how_many_words(string, c, string_len);
	if (count_words == 0 && c == '\0')
		return (NULL);
	array_words = ft_calloc(count_words + 1, sizeof(char *));
	if (!(array_words))
		return (NULL);
	array_of_strings = split_string(string, c, array_words);
	return (array_of_strings);
}

/*#include <stdio.h>

int	main(void)

{
	char	*source = "minha,casa,minha,vida";
	char	c = ',';
	char	**array;

	array = ft_split(source, c);
	if	(!(array))
	{
		printf("KO TOTAL!Z\n");
		return 0;
	}
	for (size_t i = 0;i < 10; i++)
	{
		printf("%s\n", array[i]);
	}
	int i = 0;
	while(array[i])
		free(array[i++]);
	return 0;
}*/
