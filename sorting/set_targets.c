/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_targets.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:16:51 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/30 15:33:23 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_targets_a(t_ps *stacks)
{
	t_stack	*current;

	current = stacks->a;
	while (current != NULL)
	{
		find_next_smallest_node(stacks->b, current);
		current = current->next;
	}
}

void	set_targets_b(t_ps *stacks)
{
	t_stack	*current;

	current = stacks->b;
	while (current != NULL)
	{
		find_next_largest_node(stacks->a, current);
		current = current->next;
	}
}
