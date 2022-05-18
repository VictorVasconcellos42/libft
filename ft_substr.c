/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:44:34 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/05/13 17:44:58 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	i;
	char	*destiny;

	i = 0;
	if ((size_t) start > ft_strlen(s))
		return (NULL);
	destiny = malloc(len * sizeof(char *));
	if (!destiny)
		return (NULL);
	while (s[start] && i <= len)
	{
		destiny[i] = s[start];
		i++;
		start++;
	}
	destiny[i] = '\0';
	return (destiny);
}

/*#include <stdio.h>

int	main(void)

{
	char	*string;
	char	*destiny;

	string = "VICTOR DE VASCONCELLOS FERREIRA";

	destiny = ft_substr(string, 0, 9);
	puts(destiny);
	//for (int i = 0; i < (int) strlen(destiny); i++)
	//{
	//	printf("%d", destiny[i]);
	//}
	printf("%p", destiny);
	return 0;
}*/
