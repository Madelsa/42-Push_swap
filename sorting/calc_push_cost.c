/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_push_cost.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:55:21 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/25 19:33:11 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void calc_moves_stack_a(t_ps *stacks)
{
    t_stack *current;

    calc_size_median(stacks);
    current = stacks->a;
    while (current != NULL)
    {
        if (current->index <= stacks->a->median)
            current->push_cost = current->index;
        else
            current->push_cost = stacks->a->size - current->index;
        if (current->target->index <= stacks->b->median)
            current->target->push_cost = current->target->index;
        else
            current->target->push_cost = stacks->b->size - current->target->index;
        current->push_cost += current->target->push_cost;
        if (((current->index > 0 && current->index <= stacks->a->median)
        && (current->target->index > 0 && current->target->index <= stacks->b->median)) || 
        ((current->index < stacks->a->size && current->index > stacks->a->median)
        && (current->target->index < stacks->b->size && current->target->index > stacks->b->median)))
            current->push_cost--;
        current = current->next;
    }
}
