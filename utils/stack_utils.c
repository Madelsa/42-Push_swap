/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:35:32 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/10/30 16:50:48 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_stack_lstsize(t_stack *lst)
{
	size_t	i;

	i = 0;
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