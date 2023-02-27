/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_reverse_rotators.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:36:00 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/28 11:17:04 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_list_size(*stack) < 2)
		return ;
	head = *stack;
	tail = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
}

void	rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	write (1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{
	reverse_rotate(stack_b);
	write (1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write (1, "rrr\n", 4);
}
