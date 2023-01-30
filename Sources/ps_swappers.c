/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swappers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:04:34 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/30 12:54:01 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list	*head;
	t_list	*next;
	int		temp_content;
	int		temp_index;

	if (ft_list_size(*stack) < 2)
		return ;
	head = *stack;
	next = head->next;
	if (!head && !next)
		return ;
	temp_content = head->content;
	temp_index = head->index;
	head->content = next->content;
	head->index = next->index;
	next->content = temp_content;
	next->index = temp_index;
}

void	sa(t_list **stack_a)
{
	swap(stack_a);
	write (1, "sa\n", 3);
}

void	sb(t_list **stack_b)
{
	swap(stack_b);
	write (1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write (1, "ss\n", 3);
}
