/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:46:49 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/19 21:39:25 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sa(t_ps *stack)
{
    if (ft_stack_lstsize(stack->a) < 2)
        return ;
    t_stack *first;
    t_stack *second;

    first = stack->a;
    second = first->next;
    first->next = second->next;
    second->next = first;
    stack->a = second;
    ft_printf("sa\n");
}

void    sb(t_ps *stack)
{
   if (ft_stack_lstsize(stack->b) < 2)
        return ;
    t_stack *first;
    t_stack *second;

    first = stack->b;
    second = first->next;
    first->next = second->next;
    second->next = first;
    stack->b = second;
    ft_printf("sb\n");
}

void ss(t_ps *stack)
{
    sa(stack);
    sb(stack);
    ft_printf("ss\n");

}

void ra(t_ps *stack)
{
    if (ft_stack_lstsize(stack->a) < 2)
        return ;
    t_stack *first;
    
    first = stack->a;
    stack->a = first->next;
    first->next = NULL;
    ft_stack_lstadd_back(&stack->a, first);
    ft_printf("ra\n");
}

void rb(t_ps *stack)
{
    if (ft_stack_lstsize(stack->b) < 2)
        return ;
    t_stack *first;
    
    first = stack->b;
    stack->b = first->next;
    first->next = NULL;
    ft_stack_lstadd_back(&stack->b, first);
    ft_printf("rb\n");
}

void rr(t_ps *stack)
{
    ra(stack);
    rb(stack);
    ft_printf("rr\n");
}

void rra(t_ps *stack)
{
    if (ft_stack_lstsize(stack->a) < 2)
        return ;
    t_stack *last;
    t_stack *before_last;

    last = stack->a;
    while (last->next != NULL)
    {
        before_last = last;
        last = last->next;
    }
    before_last->next = NULL;
    last->next = stack->a;
    stack->a = last;
    ft_printf("rra\n");
}

void rrb(t_ps *stack)
{
    if (ft_stack_lstsize(stack->b) < 2)
        return ;
    t_stack *last;
    t_stack *before_last;

    last = stack->b;
    while (last->next != NULL)
    {
        before_last = last;
        last = last->next;
    }
    before_last->next = NULL;
    last->next = stack->b;
    stack->b = last;
    ft_printf("rrb\n");
}

void rrr(t_ps *stack)
{
    rra(stack);
    rrb(stack);
    ft_printf("rrr\n");
}

void pa(t_ps *stack)
{
    if (stack->b == NULL)
        return ;
    t_stack *first_element_b;

    first_element_b = stack->b;
    stack->b = stack->b->next;
    ft_stack_lstadd_front(&stack->a, first_element_b);
    ft_printf("pa\n");
}

void pb(t_ps *stack)
{
    if (stack->a == NULL)
        return ;
    t_stack *first_element_a;

    first_element_a = stack->a;
    stack->a = stack->a->next;
    ft_stack_lstadd_front(&stack->b, first_element_a);
    ft_printf("pb\n");
}