/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_movements1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:54:15 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/17 11:59:14 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **stack_a)
{
	t_list *previous;
	int		temp;

	if ((*stack_a == NULL) || ((*stack_a)->next == NULL))
		return ;
	previous = ft_get_previous(*stack_a, (*stack_a)->next);
	if (previous == NULL)
	{
		temp = (*stack_a)->content;
		previous->content = previous->next->content;
		previous->next->content = temp;
	}
	else if (previous != NULL)
	{
		temp = previous->content;
		previous->content = previous->next->content;
		previous->next->content = temp;
	}
	printf("sa");
}
