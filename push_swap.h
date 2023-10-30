/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:21:19 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/10/30 16:43:50 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
	size_t			index;
}					t_stack;

typedef struct s_ps
{
	t_stack			*a;
	t_stack			*b;
}					t_ps;

void				check_and_insert(t_ps *stack, char **arr);
void				free_arr(char **arr);
void				create_stacks(t_ps *stack);
void				insert_into_stack(t_ps *stack, char *str);
void				free_arr_list(t_ps *stack, char **arr);
t_stack				*ft_stack_lstnew(int content);
void				ft_stack_lstadd_back(t_stack **lst, t_stack *new_list);
void				ft_stack_lstclear(t_stack **lst, void (*del)(void *));
int					ft_stack_lstsize(t_stack *lst);
void				print_error(void);
void				check_dup(t_ps *stack);
void				free_list(t_ps *stack);
long				ft_atoi_ps(const char *str);

#endif