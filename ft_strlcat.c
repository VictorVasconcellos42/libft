/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:32:30 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/05/16 10:14:01 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

{
    size_t  len_dst;
    size_t  i;
	size_t	len_src;
    i = 0;
    len_dst = ft_strlen(dst);
    printf("%lu\n", len_dst);
    len_src = ft_strlen(src);
	if (dstsize == 0)
        return (len_src);
	else if (len_dst >= dstsize)
		return (len_src + dstsize);
    while (i < (dstsize - len_dst))
    {
        dst[len_dst + i] = src[i];
        i++;
    }
    dst[len_dst + i - 1] = '\0';
    return (len_dst + len_src);
}
