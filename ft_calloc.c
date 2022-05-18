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
	void	*allocate;

	n = size * count;
	allocate = malloc(size);
	if (!(allocate))
		return (NULL);
	ft_bzero(allocate, (size));
	return (allocate);
}
