/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:20:59 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/11/30 15:28:12 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	free_list(&stacks);
}
