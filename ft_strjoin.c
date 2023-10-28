/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 01:36:13 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/10/28 16:16:34 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newString;
	int		i;
	int		j;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	newString = malloc(sizeof(char) * size);
	if (!newString)
		return (NULL);
	i = -1;
	while (s1[++i])
		newString[i] = s1[i];
	j = -1;
	while (s2[++j])
		newString[i++] = s2[j];
	newString[i] = '\0';
	return (newString);
}
