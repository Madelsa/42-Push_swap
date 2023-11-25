/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:35:32 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/11/25 17:39:08 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_stack_lstsize(t_stack *lst)
{
	size_t	i;

	i = 0;
	// ft_printf("in size!!!");
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	ft_stack_lstclear(t_stack **lst, void (*del)(void *))
{
	t_stack	*node;
	t_stack	*next;

	if (!lst || !*lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
	*lst = NULL;
}

void	ft_stack_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*node;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	node = *lst;
	while (node->next)
		node = node->next;
	node->next = new;
}

void	ft_stack_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		new->next = NULL;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

t_stack	*ft_stack_lstnew(int content)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
