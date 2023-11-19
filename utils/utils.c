/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:35:34 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/11/16 23:10:24 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static long	process_digits_atoi(const char *str, int sign, int i)
{
	long	result;
	long	prev;

	result = 0;
	prev = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		prev = result;
		result = result * 10 + str[i++] - '0';
		if (prev > result)
		{
			if (sign < 0)
				return (0);
			else
				return (-1);
		}
	}
	return (result * sign);
}

long	ft_atoi_ps(const char *str)
{
	int	sign;
	int	i;

	if (str == NULL)
		return (0);
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	return (process_digits_atoi(str, sign, i));
}
