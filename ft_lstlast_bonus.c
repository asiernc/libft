/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:39:07 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/11 21:07:17 by asinovio-c       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
	//valorar null
}
/*
#include <stdio.h>
#include <stdlib.h>

t_list	*lst_new(void *content)
{
	t_list	*node = (t_list *)malloc(sizeof(t_list));

	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
}

void	ft_lstadd(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
		lst = &new;
	else
	{
		new->next = lst;
		lst = new;
	}
}

int	main(void)
{
	t_list	*n1 = lst_new("Hola");
	t_list	*n2 = lst_new("asier");
	
	ft_lstadd(&n2, n1);
	if (n1)
	{
		printf("%s", (char *)n1->next->content);
	}
	return (0);
}*/
