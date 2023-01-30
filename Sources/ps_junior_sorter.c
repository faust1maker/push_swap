/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_junior_sorter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:26:24 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/28 12:18:03 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_min(t_list **stack, int ref_value)
{
	t_list	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != ref_value)
			min = head->index;
	}
	return (min);
}

void	ft_sort_3(t_list **stack_a)
{
	t_list	*head;
	int		min;
	int		next_min;

	head = *stack_a;
	min = ft_get_min(stack_a, -1);
	next_min = ft_get_min(stack_a, min);
	if (head->index == min && head->next->index != next_min)
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if (head->index == next_min)
	{
		if (head->next->index == min)
			sa(stack_a);
		else
			rra(stack_a);
	}
	else
	{
		if (head->next->index == min)
			ra(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
}

void	ft_sort_4(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	distance = ft_get_distance(stack_a, -1);
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
		rra(stack_a);
	if (stack_is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	ft_sort_3(stack_a);
	pa(stack_b, stack_a);
}

void	ft_sort_5(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	distance = ft_get_distance(stack_a, ft_get_min(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (distance == 4)
		rra(stack_a);
	if (stack_is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	ft_sort_4(stack_a, stack_b);
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
