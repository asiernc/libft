/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:59:55 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/09 11:59:57 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while ((*str != '\0') && (*str != (char)c))
		str++;
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}
/*#include <stdio.h>

#define SIZE 30
int	main(void)
{
	const char	str[SIZE] = "asier";
	int	ch = 'e';
	char	*result = ft_strchr(str, ch);

	printf("The first ocurrence of %c in '%s' is '%s'\n", ch, str, result);
	return (0);
}*/
