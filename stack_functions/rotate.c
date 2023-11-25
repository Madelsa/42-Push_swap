/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:09:59 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/25 20:16:04 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ra(t_ps *stacks, int indirect_call) 
{
    (void)indirect_call;
    if (ft_stack_lstsize(stacks->a) < 2)
        return;

    t_stack *first = stacks->a;
    stacks->a = first->next;
    first->next = NULL;
    ft_stack_lstadd_back(&stacks->a, first);
    set_index(stacks->a);
    if (indirect_call == 0)
        ft_printf("ra\n");
}

void rb(t_ps *stacks, int indirect_call)
{
    (void)indirect_call;
    if (ft_stack_lstsize(stacks->b) < 2)
        return ;
    t_stack *first;
    
    first = stacks->b;
    stacks->b = first->next;
    first->next = NULL;
    ft_stack_lstadd_back(&stacks->b, first);
    set_index(stacks->b);
    if (indirect_call == 0)
        ft_printf("rb\n");
}

void rr(t_ps *stacks)
{
    int indirect_call;
    
    indirect_call = 1;
    ra(stacks, indirect_call);
    rb(stacks, indirect_call);
    ft_printf("rr\n");
}

