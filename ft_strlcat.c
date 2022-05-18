/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:32:30 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/05/16 16:52:12 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

{
	size_t	len_dst;
	size_t	i;

	len_dst = 0;
	while (dst[len_dst] && len_dst < dstsize)
		len_dst++;
	if (len_dst == dstsize)
		return (ft_strlen(src) + len_dst);
	i = 0;
	while (src[i] && i < (dstsize - len_dst) - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + ft_strlen(src));
}

/*#include <stdio.h>
#include <string.h>

int	main(void)

{
	char *dst;
	char src[] = "lorem";
	char *dst2;
	char src2[] = "lorem";
	size_t	ret;
	size_t	ret2;

	dst = malloc(15 * sizeof(char *));
	dst2 = malloc(15 * sizeof(char *));
	memset(dst, 'r', 6);
	memset(dst2, 'r', 6);
	memset(dst, '\', 15);
	memset(dst2, '\0', 15);
	ret = strlcat(dst, src, sizeof(dst));
	ret2 = ft_strlcat(dst2, src2, sizeof(dst));
	if (ret == ret2)
		printf("OK!!\n");
	else
		printf("VISH\n");
	printf("original = %lu\nminha = %lu\n", ret, ret2);
	puts(dst);
	puts(dst2);
}*/
