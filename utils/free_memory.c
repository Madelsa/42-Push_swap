/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:01:34 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/30 15:29:20 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	free_arr_list(t_ps *stacks, char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	ft_stack_lstclear(&stacks->a, free);
	ft_stack_lstclear(&stacks->b, free);
}

void	free_list(t_ps *stacks)
{
	ft_stack_lstclear(&stacks->a, free);
	ft_stack_lstclear(&stacks->b, free);
}
