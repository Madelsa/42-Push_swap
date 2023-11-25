/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:20:59 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/11/25 21:36:37 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_ps *stacks)
{
	t_stack	*current;

	current = stacks->a;
	ft_printf("\nstack A\n");
	while (current != NULL)
	{
		ft_printf("%d\t", current->index);
		ft_printf("%d\n", current->content);
		// ft_printf("target: %d\t", current->target->content);
		// ft_printf("push cost: %d\t", current->push_cost);
		// ft_printf("target push cost: %d\n", current->target->push_cost);
		// // ft_printf("cheapest node vale: %d\n", stacks->a->cheapest_node->content);
		current = current->next;
	}
	current = stacks->b;
	ft_printf("\nstack B\n");
	while (current != NULL)
	{
		ft_printf("%d\t", current->index);
		ft_printf("%d\n", current->content);
		// ft_printf("target: %d\n", current->target->content);
		current = current->next;
	}
}

int	main(int ac, char **av)
{
	int		i;
	char	**arr;
	t_ps	stacks;

	if (ac < 2)
		return (1);
	create_stacks(&stacks);
	i = 1;
	while (av[i] != NULL)
	{
		arr = ft_split(av[i], ' ');
		if (arr[0] == NULL)
			return (free_arr(arr), print_error(), 1);
		check_and_insert(&stacks, arr);
		i++;
		free_arr(arr);
	}
	check_dup(&stacks);
	set_index(stacks.a);
	check_list_sorted(&stacks);
	push_to_b(&stacks);
	// print_list(&stacks);
	free_list(&stacks);
}
