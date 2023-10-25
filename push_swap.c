/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:20:59 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/10/25 14:30:41 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_string(char **arr)
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

void	check_input_integer(char **arr)
{
	int	i;
	int	j;
	int	sign_count;

	i = 0;
	sign_count = 0;
	while (arr[i] != NULL)
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			if (arr[i][j] == '-' || arr[i][j] == '+')
			{
				sign_count++;
				if (ft_isdigit(arr[i][j + 1]) == 0 || sign_count > 1)
					return (free_string(arr), exit(1));
			}
			else if (ft_isdigit(arr[i][j]) == 0)
				return (free_string(arr), exit(1));
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	**arr;

	// t_ps	stack;
	if (ac == 1)
		return (1);
	i = 1;
	while (av[i] != NULL)
	{
		arr = ft_split(av[i], ' ');
		check_input_integer(arr);
		j = 0;
		while (arr[j])
		{
			ft_printf("%d\n", ft_atoi(arr[j]));
			j++;
		}
		free_string(arr);
		i++;
	}
}
