/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovio-c <anovio-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:48:42 by anovio-c          #+#    #+#             */
/*   Updated: 2024/01/12 14:00:08 by anovio-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>

void	de(void *content)
{
	write(1, "ok\n", 3);
	//free(content);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("Hola");
	printf("string: %s\n", (char *)lst->content);
	ft_lstdelone(lst, del);
	if (!lst->next)
		write(1, "free ok\n", 8);
	return (0);
}*/
