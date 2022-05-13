/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:32:30 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/05/06 22:38:26 by vde-vasc         ###   ########.fr       */
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
    len_src = ft_strlen(src);
	if (dstsize == 0)
        return (len_src);
	else if (len_dst > dstsize)
		return (len_src + dstsize);
    while (src[i] && i < (dstsize - len_dst))
    {
        dst[len_dst + i] = src[i];
        i++;
    }
    dst[len_dst + i - 1] = '\0';
    return (len_dst + len_src);
}

/*#include <stdio.h>
#include <string.h>

int test(int size)
{
    char first[] = "This is ", second[] = "This is ";
    char last[] = "a potentially long string", last2[] = "a potentially long string";
    int r, my;
    char buffer[size], buffer2[size];

    strcpy(buffer,first);
	strcpy(buffer2, second);
    r = strlcat(buffer,last,size);
   	my = ft_strlcat(buffer2,last2,size);

	printf("%d\n", size);
    puts(buffer);
	puts(buffer2);
    printf("Value returned: %d\n",r);
	printf("Value returned: %d\n",my);
	if( r > size )
        puts("String truncated\n");
    else
        puts("String was fully copied\n");

    return(0);
}
int	main(void)

{
	test(10);
	test(0);
	test(20);
	test(8);
	test(33);
	test(7);
	test(1);
	return 0;
}*/
