/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:27:27 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/30 15:18:41 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_list_sorted(t_ps *stacks)
{
	t_stack	*current;
	int		sorted;

	current = stacks->a;
	sorted = 1;
	while (current->next != NULL)
	{
		if (current->content > current->next->content)
		{
			sorted = 0;
			break ;
		}
		current = current->next;
	}
	if (sorted == 1)
		return (free_list(stacks), exit(0));
}
