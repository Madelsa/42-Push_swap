/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:21:19 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/11/19 21:39:49 by mahmoud          ###   ########.fr       */
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
void				ft_stack_lstadd_front(t_stack **lst, t_stack *new);
void				ft_stack_lstclear(t_stack **lst, void (*del)(void *));
int					ft_stack_lstsize(t_stack *lst);
void				print_error(void);
void				check_dup(t_ps *stack);
void				free_list(t_ps *stack);
long				ft_atoi_ps(const char *str);
void				sa(t_ps *stack);
void				sb(t_ps *stack);
void				ss(t_ps *stack);
void				ra(t_ps *stack);
void				rb(t_ps *stack);
void				rr(t_ps *stack);
void				rra(t_ps *stack);
void				rrb(t_ps *stack);
void				rrr(t_ps *stack);
void				pa(t_ps *stack);
void				pb(t_ps *stack);

#endif