/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_junior_sorter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:26:24 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/31 15:20:36 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
