/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:09:59 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/30 15:27:02 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_ps *stacks, int indirect_call)
{
	t_stack	*first;

	if (ft_stack_lstsize(stacks->a) < 2)
		return ;
	first = stacks->a;
	stacks->a = first->next;
	first->next = NULL;
	ft_stack_lstadd_back(&stacks->a, first);
	set_index(stacks->a);
	if (indirect_call == 0)
		ft_printf("ra\n");
}

void	rb(t_ps *stacks, int indirect_call)
{
	t_stack	*first;

	if (ft_stack_lstsize(stacks->b) < 2)
		return ;
	first = stacks->b;
	stacks->b = first->next;
	first->next = NULL;
	ft_stack_lstadd_back(&stacks->b, first);
	set_index(stacks->b);
	if (indirect_call == 0)
		ft_printf("rb\n");
}

void	rr(t_ps *stacks)
{
	int	indirect_call;

	indirect_call = 1;
	ra(stacks, indirect_call);
	rb(stacks, indirect_call);
	ft_printf("rr\n");
}
