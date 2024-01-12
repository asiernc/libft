/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:56:55 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/09 11:56:56 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buffer, int c, size_t count)
{
	const unsigned char	*str;
	size_t				i;

	str = (const unsigned char *)buffer;
	i = 0;
	while (i < count)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *buffer = "Hola me llamo Antonio";
	int c = 'm';
	size_t count = 12;

	void	*result = ft_memchr(buffer, c, count);
	if (result != NULL)
	{
		printf("In the phrase '%s', the first character 
		for search is '%c'\n", buffer, (char)c);
		printf("And was found in '%s'", (char *)result);
	}
	else
		printf("Character not found.\n");
	return (0);
}*/
