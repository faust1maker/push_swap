/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_junior_sorter_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:18:52 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/31 15:20:53 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_minimum(t_list **stack)
{
	t_list	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != -1)
			min = head->index;
	}
	return (min);
}

void	ft_pb_minimum(t_list **stack_a, t_list **stack_b, int min)
{
	t_list	*head;
	t_list	*tail;

	head = *stack_a;
	tail = ft_lstlast(head);
	while (head)
	{
		if (tail->index == min)
		{
			rra(stack_a);
			pb(stack_a, stack_b);
			break ;
		}
		if (head->index == min)
		{
			pb(stack_a, stack_b);
			break ;
		}
		ra(stack_a);
		head = *stack_a;
	}
}

int	determine_scenario(t_list **stack_a)
{
	t_list	*elem_1;
	t_list	*elem_2;
	t_list	*elem_3;

	elem_1 = *stack_a;
	elem_2 = (*stack_a)->next;
	elem_3 = (*stack_a)->next->next;
	if (elem_2->index < elem_1->index && elem_1->index < elem_3->index)
		return (1);
	if (elem_3->index < elem_2->index && elem_2->index < elem_1->index)
		return (2);
	if (elem_2->index < elem_3->index && elem_3->index < elem_1->index)
		return (3);
	if (elem_1->index < elem_3->index && elem_3->index < elem_2->index)
		return (4);
	if (elem_3->index < elem_1->index && elem_1->index < elem_2->index)
		return (5);
	return (0);
}
