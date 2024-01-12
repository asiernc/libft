/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:55:27 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/09 12:10:31 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	if (little[i] == '\0' || little == NULL)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			while (little[j] != '\0' && big[i + j] == little[j]
				&& (i + j) < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)&big[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main() {
    const char *cadenaPrincipal = "Hello, World!";
    const char *subcadena1 = "World";
    const char *subcadena2 = "abc";

    char *res1 = ft_strnstr(cadenaPrincipal, subcadena1, 15);
    char *res2 = ft_strnstr(cadenaPrincipal, subcadena2, 15);

    printf("tot %s\n", res1);
	printf("Cadena principal: %s\n", cadenaPrincipal);
    printf("Subcadena 1: %s\n", subcadena1);
    if (res1 != NULL) {
        printf("Subcadena 1 encontrada en la posición: %ld\n",
		res1 - cadenaPrincipal);
    } else {
        printf("Subcadena 1 no encontrada\n");
    }

    printf("Subcadena 2: %s\n", subcadena2);
    if (res2 != NULL) {
        printf("Subcadena 2 encontrada en la posición: %ld\n",
		res2 - cadenaPrincipal);
    } else {
        printf("Subcadena 2 no encontrada\n");
    }

    return 0;
}*/
