/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:04:47 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/30 15:26:32 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_ps *stacks)
{
	t_stack	*first_element_b;

	if (stacks->b == NULL)
		return ;
	first_element_b = stacks->b;
	stacks->b = stacks->b->next;
	ft_stack_lstadd_front(&stacks->a, first_element_b);
	set_index(stacks->a);
	set_index(stacks->b);
	ft_printf("pa\n");
}

void	pb(t_ps *stacks)
{
	t_stack	*first_element_a;

	if (stacks->a == NULL)
		return ;
	first_element_a = stacks->a;
	stacks->a = stacks->a->next;
	ft_stack_lstadd_front(&stacks->b, first_element_a);
	set_index(stacks->a);
	set_index(stacks->b);
	ft_printf("pb\n");
}
