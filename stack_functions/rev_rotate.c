/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:12:31 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/30 15:26:50 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_ps *stacks, int indirect_call)
{
	t_stack	*last;
	t_stack	*before_last;

	if (ft_stack_lstsize(stacks->a) < 2)
		return ;
	last = stacks->a;
	while (last->next != NULL)
	{
		before_last = last;
		last = last->next;
	}
	before_last->next = NULL;
	last->next = stacks->a;
	stacks->a = last;
	set_index(stacks->a);
	if (indirect_call == 0)
		ft_printf("rra\n");
}

void	rrb(t_ps *stacks, int indirect_call)
{
	t_stack	*last;
	t_stack	*before_last;

	if (ft_stack_lstsize(stacks->b) < 2)
		return ;
	last = stacks->b;
	while (last->next != NULL)
	{
		before_last = last;
		last = last->next;
	}
	before_last->next = NULL;
	last->next = stacks->b;
	stacks->b = last;
	set_index(stacks->b);
	if (indirect_call == 0)
		ft_printf("rrb\n");
}

void	rrr(t_ps *stacks)
{
	int	indirect_call;

	indirect_call = 1;
	rra(stacks, indirect_call);
	rrb(stacks, indirect_call);
	ft_printf("rrr\n");
}
