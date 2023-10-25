/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:21:19 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/10/25 13:43:08 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_stack
{
	void			*content;
	struct s_stack	*next;
	size_t			index;
}					t_stack;

typedef struct s_ps
{
	t_stack			a;
	t_stack			b;
}					t_ps;

void				check_input_integer(char **arr);
#endif