/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_next_smallest_largest.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:46:22 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/25 20:59:40 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void find_max_value_node(t_stack *stack_b, t_stack *node_a)
{
    t_stack *current;
    
    find_max(stack_b);
    current = stack_b;

    while (current != NULL)
    {
        if (current->content == stack_b->max)
        {
            node_a->target = current;
            return ;
        }
        current = current->next;
    }   
}

void find_min_value_node(t_stack *stack_a, t_stack *node_b)
{
    t_stack *current;
    
    find_min(stack_a);
    current = stack_a;

    while (current != NULL)
    {
        if (current->content == stack_a->min)
        {
            node_b->target = current;
            return ;
        }
        current = current->next;
    }   
}

void find_next_smallest_node(t_stack *stack_b, t_stack *node_a) 
{
    t_stack *current = stack_b;
    long next_smallest = LONG_MIN;

    node_a->target = NULL;

    while (current != NULL)
    {
        if (current->content < node_a->content && current->content > next_smallest)
        {
            next_smallest = current->content;
            node_a->target = current;
        }
        current = current->next;
    }
    if (node_a->target == NULL)
        find_max_value_node(stack_b, node_a);
}

void find_next_largest_node(t_stack *stack_a, t_stack *node_b)
{
    t_stack *current = stack_a;
    // t_stack *max_int_node = NULL;
    long next_largest = LONG_MAX;

    node_b->target = NULL;

    while (current != NULL)
    {
        // if (current->content == INT_MAX)
        //     max_int_node = current;
        if (current->content > node_b->content && current->content < next_largest)
        {
            next_largest = current->content;
            node_b->target = current;
        }
        current = current->next;
    }
    // ft_printf("max int content: %d\n", max_int_node->content);
    // if (node_b->target == NULL && node_b->content < INT_MAX)
    //     node_b->target = max_int_node;
    if (node_b->target == NULL)
        find_min_value_node(stack_a, node_b);
    // ft_printf("target b: %d\n", node_b->target->content);
    // exit(1);
}
