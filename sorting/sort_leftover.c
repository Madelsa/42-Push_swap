/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_leftover.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:00:52 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/29 19:19:30 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sort_leftover_nodes(t_ps *stacks)
{
    t_stack *max_node;
    max_node = set_max_node(stacks->a);
    if (max_node->index == 0)
        ra(stacks, 0);
    else if (max_node->index == 1)
        rra(stacks, 0);
    if (stacks->a->content > stacks->a->next->content)
        sa(stacks);
}