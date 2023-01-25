/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_junior_sorter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:26:24 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/25 10:36:54 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_min(t_list **stack, int value)
{
	t_list	*head;
	int		min;

	head = *stack;
	min = head->
}

void	ft_sort_3(t_list **stack_a)
{
	t_list	*head;
	int		min;
	int		next_min;

	head = *stack_a;
	min = ft_get_min(stack_a, -1);
}

void	ft_junior_sorter(t_list **stack_a, t_list **stack_b)
{
	int	size;

	if (stack_is_sorted(stack_a) || ft_list_size(*stack_a) == 0 \
		|| ft_list_size(*stack_a) == 1)
		return ;
	size = ft_list_size(*stack_a);
	if (size == 2)
		swap_a(stack_a);
	else if (size == 3)
		ft_sort_3(stack_a);
	else if (size == 4)
		ft_sort_4(stack_a, stack_b);
	else if (size == 5)
		ft_sort_5(stack_a, stack_b);
}
