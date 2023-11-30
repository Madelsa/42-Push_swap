/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cheapest_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 04:05:57 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/30 15:19:02 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_cheapest_node(t_stack *stack_a)
{
	t_stack	*current;
	t_stack	*cheapest_node;
	size_t	cheapest_value;

	current = stack_a;
	cheapest_value = INT_MAX;
	while (current != NULL)
	{
		if (current->push_cost < cheapest_value)
		{
			cheapest_value = current->push_cost;
			cheapest_node = current;
		}
		current = current->next;
	}
	stack_a->cheapest_node = cheapest_node;
}
