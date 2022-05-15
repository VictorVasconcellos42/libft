/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:57:07 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/05/13 17:40:34 by vde-vasc         ###   ########.fr       */
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

/* #include <stdio.h>

            Aula 207: Curiosidade sobre as funções malloc e calloc

            Código escrito por Wagner Gaspar
            Junho de 2021

            OBSERVAÇÃO:
            Este é apenas um código de exemplo e ambos os vetores podem estar com o valor zero em todas as posições de memória se forem vetores pequenos e não possuir lixo de memória.


int main() {

    int i, *vet1, *vet2;

    vet1 = calloc(30, sizeof(int));
    vet2 = ft_calloc(30, sizeof(int));

    printf("\nCom a original: ");
    for(i = 0; i < 30; i++)
        printf("%d ", vet1[i]);

    printf("\nCom a minha   : ");
    for(i = 0; i < 30; i++)
        printf("%d ", vet2[i]);

    return 0;
} */
