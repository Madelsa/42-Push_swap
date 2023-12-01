/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:41:25 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/12/01 14:13:37 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_error(void)
{
	ft_putstr_fd("Error\n", 2);
}

static void	perform_checks(t_ps *stacks, char **arr, char *str)
{
	int		i;
	int		sign_count;

	sign_count = 0;
	if (ft_atoi_ps(str) > INT_MAX || ft_atoi_ps(str) < INT_MIN)
		return (free_arr_list(stacks, arr), print_error(), exit(1));
	if ((ft_strncmp(str, "0", ft_strlen(str)) != 0 && ft_atoi_ps(str) == 0)
		|| (ft_strncmp(str, "-1", ft_strlen(str)) != 0
			&& ft_atoi_ps(str) == -1))
		return (free_arr_list(stacks, arr), print_error(), exit(1));
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			sign_count++;
			if (i != 0 || ft_isdigit(str[i + 1]) == 0 || sign_count > 1)
				return (free_arr_list(stacks, arr), print_error(), exit(1));
		}
		else if (ft_isdigit(str[i]) == 0)
			return (free_arr_list(stacks, arr), print_error(), exit(1));
		i++;
	}
}

void	check_and_insert(t_ps *stacks, char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		perform_checks(stacks, arr, arr[i]);
		insert_into_stack(stacks, arr[i]);
		i++;
	}
}
