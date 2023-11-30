/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_size_median.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:16:37 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/30 15:18:37 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	calc_size_median(t_ps *stacks)
{
	if (stacks->a != NULL)
	{
		stacks->a->size = ft_stack_lstsize(stacks->a);
		stacks->a->median = stacks->a->size / 2;
	}
	if (stacks->b != NULL)
	{
		stacks->b->size = ft_stack_lstsize(stacks->b);
		stacks->b->median = stacks->b->size / 2;
	}
}
