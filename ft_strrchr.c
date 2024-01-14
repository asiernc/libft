/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:57:45 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/13 20:54:34 by asinovio-c       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
char	*ft_strrchr(const char *str, int ch)
{
	const char	*tmp;

	tmp = NULL;
	while (*str)
	{
		if (*str == (char)ch)
		{
			tmp = str;
		}
		str++;
	}
	if (*str == (char)ch)
		return ((char *)str);
	else
		return ((char *)tmp);
}

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
	int ch = 'u';
	char	*result = ft_strrchr(str, ch);

	printf("The last ocurrence of %c in '%s' is '%s'\n", ch, str, result);
	return (0);
}
