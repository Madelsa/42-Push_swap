/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create_insert.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:34:12 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/11/30 15:23:17 by mabdelsa         ###   ########.fr       */
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
	t_stack	*new_node_a;

	new_node_a = ft_stack_lstnew(ft_atoi_ps(str));
	ft_stack_lstadd_back(&stacks->a, new_node_a);
}
