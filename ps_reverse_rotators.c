/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_reverse_rotators.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:36:00 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/18 16:32:14 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_list **stack_a)
{
	t_list	*last;
	t_list	*second_to_last;

	if ((*stack_a == NULL) || ((*stack_a)->next == NULL))
		return ;
	second_to_last = *stack_a;
	last = (*stack_a)->next;
	while (last->next != NULL)
	{
		second_to_last = last;
		last = last->next;
	}
	second_to_last->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	printf("rra\n");
}

void	reverse_rotate_b(t_list **stack_b)
{
	t_list	*last;
	t_list	*second_to_last;

	if ((*stack_b == NULL) || ((*stack_b)->next == NULL))
		return ;
	second_to_last = *stack_b;
	last = (*stack_b)->next;
	while (last->next != NULL)
	{
		second_to_last = last;
		last = last->next;
	}
	second_to_last->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	printf("rrb\n");
}

void	double_reverse_rotate(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate_a(stack_a);
	reverse_rotate_b(stack_b);
	printf("rrr\n");
}
