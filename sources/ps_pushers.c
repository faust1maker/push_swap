/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pushers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:06:30 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/28 10:54:04 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list	**stack_src, t_list **stack_dest)
{
	t_list	*temp;
	t_list	*head_src;
	t_list	*head_dest;

	if (!(*stack_src))
		return ;
	head_src = *stack_src;
	head_dest = *stack_dest;
	temp = head_src;
	head_src = head_src->next;
	*stack_src = head_src;
	if (!head_dest)
	{
		head_dest = temp;
		head_dest->next = NULL;
		*stack_dest = head_dest;
	}
	else
	{
		temp->next = head_dest;
		*stack_dest = temp;
	}
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	push(stack_b, stack_a);
	write (1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	write (1, "pb\n", 3);
}
