/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:14:23 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/30 15:29:43 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_ps *stacks)
{
	t_stack	*first;
	t_stack	*second;

	if (ft_stack_lstsize(stacks->a) < 2)
		return ;
	first = stacks->a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	stacks->a = second;
	set_index(stacks->a);
	ft_printf("sa\n");
}

void	sb(t_ps *stacks)
{
	t_stack	*first;
	t_stack	*second;

	if (ft_stack_lstsize(stacks->b) < 2)
		return ;
	first = stacks->b;
	second = first->next;
	first->next = second->next;
	second->next = first;
	stacks->b = second;
	set_index(stacks->b);
	ft_printf("sb\n");
}

void	ss(t_ps *stacks)
{
	sa(stacks);
	sb(stacks);
	ft_printf("ss\n");
}
