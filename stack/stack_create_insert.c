/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create_insert.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:34:12 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/11/24 06:39:34 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	create_stacks(t_ps *stacks)
{
	stacks->a = NULL;
	stacks->b = NULL;
}

void	insert_into_stack(t_ps *stacks, char *str)
{
	t_stack			*new_node_a;
	// t_stack			*new_node_b;
	// static int count = 1;
	
	new_node_a = ft_stack_lstnew(ft_atoi_ps(str));
	// if (count == 1)
	// {
	// 	new_node_b = ft_stack_lstnew(25);
	// 	ft_stack_lstadd_back(&stacks->b, new_node_b);
	// 	new_node_b = ft_stack_lstnew(30);
	// 	ft_stack_lstadd_back(&stacks->b, new_node_b);
	// 	new_node_b = ft_stack_lstnew(0);
	// 	ft_stack_lstadd_back(&stacks->b, new_node_b);
	// 	new_node_b = ft_stack_lstnew(99);
	// 	ft_stack_lstadd_back(&stacks->b, new_node_b);
	// 	count++;
	// }
	ft_stack_lstadd_back(&stacks->a, new_node_a);
}
