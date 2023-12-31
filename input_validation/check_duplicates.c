/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:33:03 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/11/22 18:51:10 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_dup(t_ps *stacks)
{
	t_stack	*current;
	size_t	i;
	t_stack	*check;

	i = ft_stack_lstsize(stacks->a);
	check = stacks->a;
	while (i > 0)
	{
		current = check->next;
		while (current != NULL)
		{
			if (current->content == check->content)
				return (free_list(stacks), print_error(), exit(1));
			current = current->next;
		}
		check = check->next;
		i--;
	}
}
