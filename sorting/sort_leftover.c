/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_leftover.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:00:52 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/30 15:19:49 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_leftover_nodes(t_ps *stacks)
{
	t_stack	*max_node;

	max_node = set_max_node(stacks->a);
	if (max_node->index == 0)
		ra(stacks, 0);
	else if (max_node->index == 1)
		rra(stacks, 0);
	if (stacks->a->content > stacks->a->next->content)
		sa(stacks);
}
