/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:02:41 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/30 15:19:33 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_index(t_stack *stack)
{
	t_stack	*current;
	size_t	index;

	current = stack;
	index = 0;
	while (current != NULL)
	{
		current->index = index++;
		current = current->next;
	}
}
