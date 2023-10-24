/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:20:59 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/10/24 14:10:13 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_string(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	check_input_integer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if ((str[i] == '-' || str[i] == '+') && ft_isdigit(str[i + 1]) == 0)
				exit(1);
		}
		else
		{
			if (ft_isdigit(str[i]) == 0)
				exit(1);
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
		j = 0;
		arr = ft_split(av[i], ' ');
		while (arr[j] != NULL)
		{
			check_input_integer(arr[j]);
			ft_printf("%s\n", arr[j]);
			j++;
		}
		i++;
	}
}
