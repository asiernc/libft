/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:57:11 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/09 14:40:54 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)dest;
	while (i < count)
		ptr[i++] = (unsigned char)c;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[30] = "Hola me llamo rufus";

	ft_memset(str, '*', 4);
	printf("%s", str);
	return (0);
}*/
