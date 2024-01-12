/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:59:42 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/09 11:59:44 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)ptr1;
	p2 = (unsigned char *)ptr2;
	i = 0;
	if (num > 0)
	{
		while (i < num)
		{
			if (p1[i] != p2[i])
				return (p1[i] - p2[i]);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const char str[7] = "Hola me";
	const char str2[7] = "Hola mE";
	size_t num = 7;

	int	result = ft_memcmp(str, str2, num);
	printf("Result is: %d\n", result);
	return (0);
}*/
