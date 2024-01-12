/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:06:04 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/10 14:38:47 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	final;
	size_t	i;

	start = 0;
	while (s1[start] != '\0' && check_set(s1[start], set))
		start++;
	final = ft_strlen(s1);
	while (final > start && check_set(s1[final - 1], set))
		final--;
	str = (char *)malloc((final - start + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (start < final)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

int	main(void)
{
	char const	*s1 = " .   Asier    ";
	char const	*set = " .";
	char const	*res = ft_strtrim(s1, set);

	printf("%s", res);
	return (0);
}*/
