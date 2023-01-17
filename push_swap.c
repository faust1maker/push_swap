/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:55:24 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/17 11:54:53 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*temp_clone1;
	t_list	*temp_clone2;

	if (!ft_input_checker(ac, av))
	{
		write (2, "Error", 5);
		return (0);
	}

	stack_a = ft_master_parser(av);

	// PRINT STACK SIZE

	ft_list_size(stack_a);

	// PRINT STACK CONTENT

	temp_clone1 = stack_a;
	while (temp_clone1->next != NULL)
	{
		printf ("%d \n", (int)temp_clone1->content);
		temp_clone1 = temp_clone1->next;
	}

	// MANEUVERS

	swap_a(&stack_a);

	// REPRINTING TO VERIFY

	temp_clone2 = stack_a;
	while (temp_clone2->next != NULL)
	{
		printf ("%d \n", (int)temp_clone2->content);
		temp_clone2 = temp_clone2->next;
	}

	return (0);
}
