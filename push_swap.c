/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:20:59 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/10/30 15:40:46 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
}

void	free_list(t_ps *stack)
{
	ft_stack_lstclear(&stack->a, free);
}

void	print_list(t_ps *stack)
{
	t_stack	*current;

	current = stack->a;
	while (current != NULL)
	{
		ft_printf("%d\t", current->index);
		ft_printf("%d\n", current->content);
		current = current->next;
	}
}

int	main(int ac, char **av)
{
	int		i;
	char	**arr;
	t_ps	stack;

	if (ac < 2)
		return (1);
	create_stacks(&stack);
	i = 1;
	while (av[i] != NULL)
	{
		arr = ft_split(av[i], ' ');
		if (arr[0] == NULL)
			return (print_error(), 1);
		check_and_insert(&stack, arr);
		i++;
		free_arr(arr);
	}
	check_dup(&stack);
	print_list(&stack);
	free_list(&stack);
}
