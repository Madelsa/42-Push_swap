/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_next_smallest_largest.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:46:22 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/29 19:27:12 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void find_next_smallest_node(t_stack *stack_b, t_stack *node_a) 
{
    t_stack *current = stack_b;
    long next_smallest = LONG_MIN;

    node_a->target = NULL;
    while (current != NULL)
    {
        if (current->content < node_a->content 
            && current->content > next_smallest)
        {
            next_smallest = current->content;
            node_a->target = current;
        }
        current = current->next;
    }
    if (node_a->target == NULL)
        node_a->target = set_max_node(stack_b);
}

void find_next_largest_node(t_stack *stack_a, t_stack *node_b)
{
    t_stack *current = stack_a;
    long next_largest = LONG_MAX;

    node_b->target = NULL;
    while (current != NULL)
    {
        if (current->content > node_b->content 
            && current->content < next_largest)
        {
            next_largest = current->content;
            node_b->target = current;
        }
        current = current->next;
    }
    if (node_b->target == NULL)
        node_b->target = set_min_node(stack_a);
}
