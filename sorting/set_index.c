/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:02:41 by mahmoud           #+#    #+#             */
/*   Updated: 2023/11/24 08:08:49 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    set_index(t_stack *stack)
{
    t_stack *current;
    size_t  index;
    
    current = stack;
    index = 0;
    while (current != NULL)
    {
        current->index = index++;
        current = current->next;
    }
}