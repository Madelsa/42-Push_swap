/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:48:46 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/25 17:28:14 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void find_min(t_stack *stack)
{
    t_stack *current;

    current = stack;
    stack->min = stack->content;
    while (current != NULL)
    {
        if (current->content < stack->min)
            stack->min = current->content;
        current = current->next;
    }
}

void find_max(t_stack *stack)
{
    t_stack *current;

    current = stack;
    stack->max = stack->content;
    while (current != NULL)
    {
        if (current->content > stack->max)
            stack->max = current->content;
        current = current->next;
    }
}

t_stack *set_max_node(t_ps *stacks)
{
    t_stack *current;
    t_stack *max_node;
    
    max_node = NULL;
    current = stacks->a;
    find_max(stacks->a);
    while (current != NULL)
    {
        if (current->content == stacks->a->max)
        {
            max_node = current;
            break;
        }
        current = current->next;
    }
    return(max_node);
}

t_stack *set_min_node(t_ps *stacks)
{
    t_stack *current;
    t_stack *min_node;
    
    min_node = NULL;
    current = stacks->a;
    find_min(stacks->a);
    while (current != NULL)
    {
        if (current->content == stacks->a->min)
        {
            min_node = current;
            break;
        }
        current = current->next;
    }
    return(min_node);
}