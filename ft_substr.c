/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:22:21 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/11 11:20:57 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	j = ft_strlen(s + start);
	if (len > j)
		len = j;
	substr = (char *)malloc(len + 1);
	if (!s || !substr)
		return (NULL);
	j = 0;
	while (i < ft_strlen(s) && j < len)
		substr[j++] = s[i++];
	substr[j] = '\0';
	return (substr);
}
/*
#include <stdio.h>

int	main(void)
{
	const char		*str = "Hola me llamo Asier";
	unsigned int	start = 14;
	size_t			len = 5;
	char			*res = ft_substr(str, start, len);

	printf("%s", res);
	return (0);
}*/
