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
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	else if (len_dst >= dstsize)
		return (len_src + dstsize);
	i = 0;
	while (i < (dstsize - len_dst))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i - 1] = '\0';
	return (len_dst + len_src);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)

{
	char dst[10] = "a";
	char src[] = "bcd";
	char dst2[10] = "a";
	char src2[] = "bcd";
	size_t	ret;
	size_t	ret2;
	ret = strlcat(dst, src, sizeof(dst));
	ret2 = ft_strlcat(dst2, src2, sizeof(dst));
	if (ret == ret2)
		printf("OK!!\n");
	else
		printf("VISH\n");
	printf("original = %lu\nminha = %lu\n", ret, ret2);
	puts(dst);
	puts(dst2);
} */