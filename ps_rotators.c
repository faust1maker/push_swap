/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotators.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:06:51 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/18 09:45:56 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

void	rotate_a(t_list **stack_a)
{
	t_list	*last;

	if ((*stack_a == NULL) || ((*stack_a)->next == NULL))
		return ;
	last = *stack_a;
	while (last->next != NULL)
		last = last->next;
	last->next = *stack_a;
	*stack_a = (*stack_a)->next;
	last->next->next = NULL;
	printf("ra\n");
}
