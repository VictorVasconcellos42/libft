/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 22:55:28 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/05/10 16:25:20 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strchr(const char *s, int c)

{
	while (*s)
	{
		if (*s  == c)
			return ((char *) s);
		s++ ;
	}
	return (0) ;
}


/*int main(void)

{
    char    *dest;
	char 	*origin;

	origin = strchr("Victor", '6');
    dest = ft_strchr("Victor", '6');
	puts(origin) ;
    puts(dest);
}*/
