/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 05:40:51 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/25 21:25:22 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void perform_operations(t_ps *stacks)
{
    t_stack *cheapest_node;
    cheapest_node = stacks->a->cheapest_node;
    size_t median_a = stacks->a->median;
    size_t median_b = stacks->b->median;
   while (1)
   {
            // ft_printf("-------------------------\n");

         if ((cheapest_node->index != 0 && cheapest_node->index <= median_a)
        && (cheapest_node->target->index != 0 && cheapest_node->target->index <= median_b))
            rr(stacks);
        else if ((cheapest_node->index != 0 && cheapest_node->index > median_a)
        && (cheapest_node->target->index != 0 && cheapest_node->target->index > median_b))
            rrr(stacks);
        if (cheapest_node->index != 0 && cheapest_node->index <= median_a)
            ra(stacks, 0);
        else if (cheapest_node->index != 0 && cheapest_node->index > median_a)// no need maybe
            rra(stacks, 0);
        if (cheapest_node->target->index != 0 && cheapest_node->target->index <= median_b)
            rb(stacks, 0);
        else if (cheapest_node->target->index != 0 && cheapest_node->target->index > median_b)
            rrb(stacks, 0);
        if (cheapest_node->index == 0 && cheapest_node->target->index == 0)
            break;
   }
   pb(stacks);
}

void sort_a(t_ps *stacks)
{
    t_stack *min;
    
    min = set_min_node(stacks);
    calc_size_median(stacks);
    size_t median = stacks->a->median;
    // print_list(stacks);
    // ft_printf("median: %d\n", stacks->a->median);

        // ft_printf("min index: %d\n", min->index);
    while (1)
    {
            // ft_printf("-------------------------\n");
        if (min->index == 0)
            break;
        if (min->index != 0 && min->index <= median)
            ra(stacks, 0);
        else if (min->index != 0 && min->index > median)// no need maybe
            rra(stacks, 0);
        // print_list(stacks);
        
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
    // print_list(stacks); ////////////////
    // ft_printf("-------------------------\n");
    while (size > 3)
    {
        set_targets_a(stacks);
        calc_moves_stack_a(stacks);
        find_cheapest_node(stacks->a);
        perform_operations(stacks);
        size--;
    }
    // print_list(stacks);////////////////
    // ft_printf("-------------------------\n");
    size = ft_stack_lstsize(stacks->b);
    sort_leftover_nodes(stacks);
    while (size > 0)
    {
        // print_list(stacks);
        set_targets_b(stacks);
        // ft_printf("b target: %d\n", stacks->b->target->content);
        calc_size_median(stacks);
        // ft_printf("stack a median: %d\n", stacks->a->median);
        // print_list(stacks);
        // ft_printf("target index: %d", stacks->b->target->index);
        // exit(1);
        size_t median = stacks->a->median;
        while (stacks->b->target->index != 0)
        {
            // ft_printf("-------------------------\n");

            if (stacks->b->target->index != 0 && stacks->b->target->index <= 
            median)
                ra(stacks, 0);
            else if (stacks->b->target->index != 0 && stacks->b->target->index > 
            median) //no need maybe
                rra(stacks, 0);
        }
        size--;
        pa(stacks);
    }
    // print_list(stacks);////////////////
    // ft_printf("-------------------------\n");
    sort_a(stacks);
}
