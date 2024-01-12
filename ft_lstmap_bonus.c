#include "libft.h"

static t_list	*lst_new(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

static void	lst_clear(t_list **lst, void (*del)(void *))
{
	if (!(*lst) || !lst || !del)
		return ;
	lst_clear(&((*lst)->next), del);
	(del)((*lst)->content);
	free(*lst);
	lst = NULL;
}

static void	lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp;
	void	*func;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		func = f(lst->content);
		tmp = lst_new(func);
		if (!tmp)
		{
			lst_clear(&tmp, del);
			free(func);
			return (NULL);
		}
		lstadd_back(&new_lst, tmp);
		lst = lst->next;
	}
	return (new_lst);
}
