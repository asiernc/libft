/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:06:48 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/11 16:38:07 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!lst)
		lst = &new;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
int	main(void)
{
	t_list	*node;
	t_list	*lst;

	lst = NULL;
	ft_lstadd_front(&lst, ft_lstnew("hello"));
	if (lst)
	{
		printf("%s", (char *)lst->content);
	}
	printf("%p\n", &lst[0]);
	return (0);
}*/
