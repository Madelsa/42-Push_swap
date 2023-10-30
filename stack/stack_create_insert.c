/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create_insert.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:34:12 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/10/30 16:45:08 by mabdelsa         ###   ########.fr       */
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
	t_stack			*new_node;
	static size_t	i = 1;

	new_node = ft_stack_lstnew(ft_atoi_ps(str));
	new_node->index = i++;
	ft_stack_lstadd_back(&stack->a, new_node);
}
