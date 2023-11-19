/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:20:59 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/11/19 21:40:50 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_ps *stack)
{
	t_stack	*current;

	current = stack->a;
	ft_printf("\nstack A\n");
	while (current != NULL)
	{
		// ft_printf("%d\t", current->index);
		ft_printf("%d\n", current->content);
		current = current->next;
	}
	current = stack->b;
	ft_printf("\nstack B\n");
	while (current != NULL)
	{
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
	// sa(&stack);
	// sb(&stack);
	// ss(&stack);
	// ra(&stack);
	// rb(&stack);
	// rr(&stack);
	// rra(&stack);
	// rrb(&stack);
	// rrr(&stack);
	// pa(&stack);
	// pb(&stack);
	print_list(&stack);
	free_list(&stack);
}
