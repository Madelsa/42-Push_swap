/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:14:23 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/25 20:17:20 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sa(t_ps *stacks)
{
    if (ft_stack_lstsize(stacks->a) < 2)
        return ;
    t_stack *first;
    t_stack *second;

    first = stacks->a;
    second = first->next;
    first->next = second->next;
    second->next = first;
    stacks->a = second;
    set_index(stacks->a);
    ft_printf("sa\n");
}

void    sb(t_ps *stacks)
{
   if (ft_stack_lstsize(stacks->b) < 2)
        return ;
    t_stack *first;
    t_stack *second;

    first = stacks->b;
    second = first->next;
    first->next = second->next;
    second->next = first;
    stacks->b = second;
    set_index(stacks->b);
    ft_printf("sb\n");
}

void ss(t_ps *stacks)
{
    sa(stacks);
    sb(stacks);
    ft_printf("ss\n");
}