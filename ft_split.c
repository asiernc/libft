/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:47:28 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/11 11:16:29 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static size_t	get_len_word(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*put_word(char const *s, int start, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (len--)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}

static char	**subsplit(char const *s, char c, char **arr, size_t words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (s[j] && s[j] == c)
			j++;
		arr[i] = put_word(s, j, get_len_word(&s[j], c));
		if (!arr[i])
		{
			while (--i >= 0)
			{
				free(arr[i]);
				return (NULL);
			}
		}
		while (s[j] && s[j] != c)
			j++;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (!s)
		return (NULL);
	words = get_count_words(s, c);
	arr = (char **)malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	arr = subsplit(s, c, arr, words);
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	return (arr);
}
/*
int	main(void)
{
	char const *str = "ene,feb,mar,abr,mayo,jun";
	char **substr = ft_split(str, ',');
	int	i = 0;

	if (substr != NULL)
	{
		printf("String: %s\n", str);
		while (substr[i] != NULL)
		{
			printf("Substr %d: %s\n", i + 1, substr[i]);
			free(substr[i]);
			i++;
		}
		free(substr);
	}
	return (0);
}*/
