/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:01:34 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/19 19:30:38 by mahmoud          ###   ########.fr       */
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

void	free_arr_list(t_ps *stack, char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	ft_stack_lstclear(&stack->a, free);
	ft_stack_lstclear(&stack->b, free);

}

void	free_list(t_ps *stack)
{
	ft_stack_lstclear(&stack->a, free);
	ft_stack_lstclear(&stack->b, free);

}
