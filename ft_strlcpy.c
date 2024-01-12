/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:57:24 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/09 11:57:27 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int	main(void)
{
	const char str[11] = "Hola Asier";
	char dest[11];

	ft_strlcpy(dest, str, 11);
	printf("Source:%s\n", str);
	printf("Dest: %s\n", dest);
	return (0);
}*/
