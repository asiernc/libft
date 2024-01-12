/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:28:08 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/10 10:28:16 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_len(long num)
{
	size_t	len;

	len = 0;
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static char	*ft_put_z(char *str)
{
	str = (char *)malloc(2 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	long		tmp;
	size_t		len;

	str = NULL;
	tmp = n;
	len = ft_num_len(tmp);
	if (n == 0)
		return (ft_put_z(str));
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (tmp < 0)
	{
		tmp *= -1;
		str[0] = '-';
	}
	while (tmp > 0)
	{
		str[len--] = (tmp % 10) + '0';
		tmp /= 10;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n = 1345;
	int	nn = 0;
	int nnn = -2147483648;
	int nnnn = 65543767;
	long m = -2147483649;
	char	*res = ft_itoa(n);

	//printf("%s", res);
	printf("Num %d: %s\n", n, ft_itoa(n));
	printf("Num %d: %s\n", nn, ft_itoa(nn));
	printf("Num %d: %s\n", nnn, ft_itoa(nnn));
	printf("Num %d: %s\n", nnnn, ft_itoa(nnnn));
	printf("Num %ld: %s\n", m, ft_itoa(m));
	return (0);
}*/
