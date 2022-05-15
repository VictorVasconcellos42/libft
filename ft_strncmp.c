/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:29:56 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/05/06 21:42:18 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	unsigned int	i;
	int				diff;
	unsigned char	*string_one;
	unsigned char	*string_two;

	i = 0;
	string_one = (unsigned char *) s1;
	string_two = (unsigned char *) s2;
	while (i < n && string_one[i] && string_two[i])
	{
		diff = string_one[i] - string_two[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (diff);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)

{
	char	teste[] = " abc";
	char	compare[] = "ABC";
	int	a;

	a = ft_strncmp(teste, compare, 1);
	printf("%i\n", strncmp(teste, compare, 1));
	printf("%i", a);
}*/
