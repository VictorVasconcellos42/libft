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
	int	diff;

	i = 0;
	while ((i < n ))
	{
		diff = s1[i] - s2[i];
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
