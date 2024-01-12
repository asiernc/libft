/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:57:45 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/09 11:57:47 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = ft_strlen(str);
	if ((char)ch == '\0')
		return (char *)&str[0];
	while (--i >= 0)
	{
		if (str[i] == (char)ch)
			return ((char *)str + i);
	}
	return (NULL);
}*/
char	*ft_strrchr(const char *str, int ch)
{
	const char	*s;

	s = str;
	while (*str)
		str++;
	while (str >= s)
	{
		if (*str-- == (char)ch)
			return ((char *)str + 1);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
#define SIZE 30

int	ft_strlen(const char *str)
{
	int	i = 0;
	
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	const char	str[SIZE] = "yiasier";
	int	ch = 'i';
	char	*result = ft_strrchr(str, ch);

	printf("The last ocurrence of %c in '%s' is '%s'\n", ch, str, result);
	return (0);
}*/
