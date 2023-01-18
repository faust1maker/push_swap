/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swappers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:04:34 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/17 12:39:34 by fbrisson         ###   ########.fr       */
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
	printf("sa\n");
}

void	swap_b(t_list **stack_b)
{
	t_list *previous;
	int		temp;

	if ((*stack_b == NULL) || ((*stack_b)->next == NULL))
		return ;
	previous = ft_get_previous(*stack_b, (*stack_b)->next);
	if (previous == NULL)
	{
		temp = (*stack_b)->content;
		previous->content = previous->next->content;
		previous->next->content = temp;
	}
	else if (previous != NULL)
	{
		temp = previous->content;
		previous->content = previous->next->content;
		previous->next->content = temp;
	}
	printf("sb\n");
}

/*

void	double_swap(t_list **stack_a, t_list **stack_b)
{
	swap_a;
	swap_b;
	printf("ss\n");
}

*/
