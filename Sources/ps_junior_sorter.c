/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_junior_sorter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:26:24 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/31 14:00:56 by fbrisson         ###   ########.fr       */
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

void	ft_sort_3(t_list **stack_a)
{
	int	scenario;

	scenario = determine_scenario(stack_a);
	if (scenario == 1)
		sa(stack_a);
	else if (scenario == 2)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (scenario == 3)
		ra(stack_a);
	else if (scenario == 4)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (scenario == 5)
		rra(stack_a);
}

void	ft_sort_4(t_list **stack_a, t_list **stack_b)
{
	int	min;

	min = ft_get_minimum(stack_a);
	ft_pb_minimum(stack_a, stack_b, min);
	ft_sort_3(stack_a);
	pa(stack_b, stack_a);
}

void	ft_sort_5(t_list **stack_a, t_list **stack_b)
{
	int	min;
	int	second_min;

	min = ft_get_minimum(stack_a);
	ft_pb_minimum(stack_a, stack_b, min);
	second_min = ft_get_minimum(stack_a);
	ft_pb_minimum(stack_a, stack_b, second_min);
	ft_sort_3(stack_a);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
}

void	ft_junior_sorter(t_list **stack_a, t_list **stack_b)
{
	int	size;

	if (stack_is_sorted(stack_a) || ft_list_size(*stack_a) == 0 \
		|| ft_list_size(*stack_a) == 1)
		return ;
	size = ft_list_size(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		ft_sort_3(stack_a);
	else if (size == 4)
		ft_sort_4(stack_a, stack_b);
	else if (size == 5)
		ft_sort_5(stack_a, stack_b);
}
