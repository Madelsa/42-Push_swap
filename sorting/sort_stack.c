/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 05:40:51 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/27 19:00:51 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void both_above_below(t_ps *stacks, t_stack *cheapest_node, 
size_t median_a, size_t median_b)
{
     if (cheapest_node->index <= median_a &&
         cheapest_node->target->index <= median_b)
        {
            while (cheapest_node->index != 0 &&
                 cheapest_node->target->index != 0)
                rr(stacks);
        }
        else if (cheapest_node->index > median_a &&
             cheapest_node->target->index > median_b)
        {
            while (cheapest_node->index != 0 &&
                 cheapest_node->target->index != 0)
                rrr(stacks);
        }
}

void perform_operations(t_ps *stacks)
{
    t_stack *cheapest_node;
    size_t median_a; 
    size_t median_b;
    cheapest_node = stacks->a->cheapest_node;
    median_a = stacks->a->median;
    median_b = stacks->b->median;
   while (1)
   {
        both_above_below(stacks, cheapest_node, median_a, median_b);
        if (cheapest_node->index != 0 && cheapest_node->index <= median_a)
            ra(stacks, 0);
        else if (cheapest_node->index != 0 && cheapest_node->index > median_a)
            rra(stacks, 0);
        if (cheapest_node->target->index != 0 && 
            cheapest_node->target->index <= median_b)
            rb(stacks, 0);
        else if (cheapest_node->target->index != 0 &&
            cheapest_node->target->index > median_b)
            rrb(stacks, 0);
        if (cheapest_node->index == 0 && cheapest_node->target->index == 0)
            break;
   }
   pb(stacks);
}


void sort_a(t_ps *stacks)
{
    t_stack *min;
    size_t median;
    
    min = set_min_node(stacks);
    calc_size_median(stacks);
    median = stacks->a->median;
    while (1)
    {
        if (min->index == 0)
            break;
        if (min->index != 0 && min->index <= median)
            ra(stacks, 0);
        else if (min->index != 0 && min->index > median)
            rra(stacks, 0);        
    }
}

void push_to_a(t_ps *stacks)
{
    size_t size;
    size_t median;
    size = ft_stack_lstsize(stacks->b);
    while (size > 0)
    {
        set_targets_b(stacks);
        calc_size_median(stacks);
        median = stacks->a->median;
        while (stacks->b->target->index != 0)
        {
            if (stacks->b->target->index != 0 && 
                stacks->b->target->index <= median)
                ra(stacks, 0);
            else if (stacks->b->target->index != 0 && 
                stacks->b->target->index > median)
                rra(stacks, 0);
        }
        size--;
        pa(stacks);
    }
}

void push_to_b(t_ps *stacks)
{
    size_t size;
    size = ft_stack_lstsize(stacks->a);
    if (size <= 3)
        return (sort_leftover_nodes(stacks));
    if (size-- > 3)
        pb(stacks);
    if (size-- > 3)
        pb(stacks);
    while (size > 3)
    {
        set_targets_a(stacks);
        calc_moves_stack_a(stacks);
        find_cheapest_node(stacks->a);
        perform_operations(stacks);
        size--;
    }
    sort_leftover_nodes(stacks);
    push_to_a(stacks);
    sort_a(stacks);
}
