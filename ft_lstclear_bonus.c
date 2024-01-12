/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:12:03 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/12 15:56:00 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del || !(*lst))
		return ;
	ft_lstclear(&(*lst)->next, del);
	(del)((*lst)->content);
	free(*lst);
	*lst = NULL;
}
/*
#include <stdio.h>

void	del(void *content)
{
	write(1, "ok\n", 3);
	//free(content);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("hola");
	ft_lstadd_back(&lst, ft_lstnew("asier"));
	ft_lstclear(&lst, del);
	if (lst == NULL)
		write(1, "ok\n", 3);
	//printf("%p", (void *)lst);
	return (0);
}*/
