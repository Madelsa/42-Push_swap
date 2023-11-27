/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create_insert.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:34:12 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/11/27 18:58:22 by mahmoud          ###   ########.fr       */
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
	
	new_node_a = ft_stack_lstnew(ft_atoi_ps(str));
	ft_stack_lstadd_back(&stacks->a, new_node_a);
}
