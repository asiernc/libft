/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:29:25 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/10 10:29:28 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
#include <stdio.h>
#include <ctype.h>
void	uppercase(unsigned int i, char *c)
{
	*c = toupper(*c);
}

int	main(void)
{
	char	str[] = "asier";
	ft_striteri(str, uppercase);
	printf("%s", str);
	return (0);
}
// bus error char *str = "asier"
// Para corregir esto, debes declarar str como un array de caracteres
// (arreglo de caracteres mutable) en lugar de un puntero a una 
// cadena constante*/
