/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:33:03 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/10/30 15:27:42 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_dup(t_ps *stack)
{
	t_stack	*current;
	size_t	i;
	t_stack	*check;

	i = ft_stack_lstsize(stack->a);
	check = stack->a;
	while (i > 0)
	{
		current = check->next;
		while (current != NULL)
		{
			if (current->content == check->content)
				return (free_list(stack), print_error(), exit(1));
			current = current->next;
		}
		check = check->next;
		i--;
	}
}
