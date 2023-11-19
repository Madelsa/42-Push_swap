/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create_insert.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:34:12 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/11/19 19:48:48 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	create_stacks(t_ps *stack)
{
	stack->a = NULL;
	stack->b = NULL;
}

void	insert_into_stack(t_ps *stack, char *str)
{
	t_stack			*new_node_a;
	t_stack			*new_node_b;

	static size_t	i = 1;

	new_node_a = ft_stack_lstnew(ft_atoi_ps(str));
	new_node_b = ft_stack_lstnew(ft_atoi_ps(str));
	new_node_a->index = i++;
	ft_stack_lstadd_back(&stack->a, new_node_a);
	ft_stack_lstadd_back(&stack->b, new_node_b);
}
