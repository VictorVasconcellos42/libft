/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:15:41 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/05/10 16:11:38 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)

{
	size_t	i;
	size_t	minus;
    int     num;
    
    i = 0;
    num = 0;
    minus = 1;
    while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if (str[i] == '-')
    {
        minus *= -1;
        i++;
    }
    else if (str[i] == '+')
    {
        minus *= 1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return (num * minus);
    
}

/* #include <string.h>
#include <stdio.h>
int	test(char *str)

{
	int	result;

	result = ft_atoi(str);
    printf("Teste com a strind valendo %s\n", str);
	printf("%i\n", result);
	return 0;
}

int main(void)

{
    test("900");
    test("1RAFAEL0 MARCELO");
    test("3");
    test("0");
    test("210A30");
    test("-299");
    test("--100");
    test("+100");
    
} */