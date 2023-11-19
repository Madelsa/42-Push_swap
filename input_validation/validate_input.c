/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:41:25 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/11/17 16:54:16 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_error(void)
{
	ft_printf("\033[31mError\n\033[0m");
}

void	perform_checks(t_ps *stack, char **arr, char *str)
{
	int		i;
	int		sign_count;

	sign_count = 0;
	if (ft_atoi_ps(str) > INT_MAX || ft_atoi_ps(str) < INT_MIN)
		return (free_arr_list(stack, arr), print_error(), exit(1));
	if ((ft_strncmp(str, "0", ft_strlen(str)) != 0 && ft_atoi_ps(str) == 0)
		|| (ft_strncmp(str, "-1", ft_strlen(str)) != 0
			&& ft_atoi_ps(str) == -1))
		return (free_arr_list(stack, arr), print_error(), exit(1));
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			sign_count++;
			if (ft_isdigit(str[i + 1]) == 0 || sign_count > 1)
				return (free_arr_list(stack, arr), print_error(), exit(1));
		}
		else if (ft_isdigit(str[i]) == 0)
			return (free_arr_list(stack, arr), print_error(), exit(1));
		i++;
	}
}

void	check_and_insert(t_ps *stack, char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		perform_checks(stack, arr, arr[i]);
		insert_into_stack(stack, arr[i]);
		i++;
	}
}
