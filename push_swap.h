/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:21:19 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/11/30 15:28:29 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
	struct s_stack	*target;
	struct s_stack	*cheapest_node;
	size_t			push_cost;
	int				min;
	int				max;
	size_t			size;
	size_t			median;
	size_t			index;
}					t_stack;

typedef struct s_ps
{
	t_stack			*a;
	t_stack			*b;
}					t_ps;

void				check_and_insert(t_ps *stacks, char **arr);
void				print_list(t_ps *stacks);
void				free_arr(char **arr);
void				create_stacks(t_ps *stacks);
void				insert_into_stack(t_ps *stacks, char *str);
void				free_arr_list(t_ps *stacks, char **arr);
t_stack				*ft_stack_lstnew(int content);
void				find_next_smallest_node(t_stack *stack_b, t_stack *node_a);
void				find_next_largest_node(t_stack *stack_a, t_stack *node_b);
void				ft_stack_lstadd_back(t_stack **lst, t_stack *new_list);
void				ft_stack_lstadd_front(t_stack **lst, t_stack *new_list);
void				ft_stack_lstclear(t_stack **lst, void (*del)(void *));
size_t				ft_stack_lstsize(t_stack *lst);
void				print_error(void);
void				check_dup(t_ps *stacks);
void				free_list(t_ps *stacks);
long				ft_atoi_ps(const char *str);
void				sa(t_ps *stacks);
void				sb(t_ps *stacks);
void				ss(t_ps *stacks);
void				ra(t_ps *stacks, int indirect_call);
void				rb(t_ps *stacks, int indirect_call);
void				rr(t_ps *stacks);
void				rra(t_ps *stacks, int indirect_call);
void				rrb(t_ps *stacks, int indirect_call);
void				rrr(t_ps *stacks);
void				pa(t_ps *stacks);
void				pb(t_ps *stacks);
void				check_list_sorted(t_ps *stacks);
void				find_min(t_stack *stack);
void				find_max(t_stack *stack);
void				set_index(t_stack *stack);
void				set_targets_a(t_ps *stacks);
void				calc_moves_stack_a(t_ps *stacks);
void				calc_size_median(t_ps *stacks);
void				find_cheapest_node(t_stack *stack_a);
void				push_to_b(t_ps *stacks);
void				perform_operations(t_ps *stacks);
void				sort_leftover_nodes(t_ps *stacks);
void				set_targets_b(t_ps *stacks);
void				find_next_largest_node(t_stack *stack_a, t_stack *node_b);
t_stack				*set_max_node(t_stack *stack);
t_stack				*set_min_node(t_stack *stack);

#endif