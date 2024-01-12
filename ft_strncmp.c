/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:53:12 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/09 11:53:17 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i != n)
		return ((unsigned char)s1[i] - s2[i]);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *s1 = "Hello, World!";
	const char *s2 = "Hello, Universe!";
	size_t	n = 7;

	int result = ft_strncmp(s1, s2, n);

	printf("Comparison result: %d\n", result);

	if (result < 0)
		printf("'%s' is less than '%s'\n", s1, s2);
	else if (result > 0)
		printf("'%s' is greather than '%s'\n", s1, s2);
	else
		printf("'%s' is equal to '%s'\n", s1, s2);
	return (0);
}*/
