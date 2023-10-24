/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:20:59 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/10/24 16:39:56 by mabdelsa         ###   ########.fr       */
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

	i = 0;
	while (arr[i] != NULL)
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			if (arr[i][j] == '-' || arr[i][j] == '+')
			{
				if ((arr[i][j] == '-' || arr[i][j] == '+')
					&& ft_isdigit(arr[i][j + 1]) == 0)
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

	(void)ac;
	i = 1;
	while (av[i] != NULL)
	{
		arr = ft_split(av[i], ' ');
		check_input_integer(arr);
		j = 0;
		while (arr[j])
		{
			ft_printf("%s\n", arr[j]);
			j++;
		}
		free_string(arr);
		i++;
	}
}
