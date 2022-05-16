/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:57:07 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/05/16 17:33:19 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	size_t	*allocate;
	size_t	i;

	i = 0;
	allocate = malloc(count * size);
	while (allocate[i])
	{
		allocate[i] = '\0';
		i++;
	}
	return (allocate);
}
