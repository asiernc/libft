/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:02:26 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/12 11:48:25 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	int	size;

	size = 0;
	printf("size inicio: %d", size); 
	lst = ft_lstnew("Hola");
	ft_lstadd_back(&lst, ft_lstnew("asier"));
	size = ft_lstsize(lst);
	printf("size final: %d", size);

	return (0);
}*/
