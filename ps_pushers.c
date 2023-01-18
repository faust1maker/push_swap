/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pushers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:06:30 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/17 13:35:10 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **stack_a, t_list **stack_b)
{
	if (*stack_b == NULL)
		return ;
	ft_lstadd_front(stack_a, ft_lstnew((*stack_b)->content));
	*stack_b = (*stack_b)->next;
	printf("pa\n");
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a == NULL)
		return ;
	ft_lstadd_front(stack_b, ft_lstnew((*stack_a)->content));
	*stack_a = (*stack_a)->next;
	printf("pb\n");
}
