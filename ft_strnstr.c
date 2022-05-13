/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:32:11 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/05/12 14:32:12 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	size_t	i;
	size_t	j;
	char	*string;
	char	*substring;

	substring = (char *) needle;
	string = (char *) haystack;
	i = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (string[i] != '\0' && i < len)
	{
		j = 0;
		while (string[i + j] == substring[j])
		{
			if (substring[j + 1] == '\0')
				return (&string[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
