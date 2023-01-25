/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:55:24 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/25 15:11:20 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*temp_clone1;
	t_list	*temp_clone2;
	t_list	*temp_clone3;

	// CHECKING ERRORS

	if (!ft_input_checker(ac, av))
	{
		write (2, "Error\n", 6);
		return (0);
	}

	// INITIALIZING STACKS

	stack_a = ft_master_parser(av);
	if (stack_a == NULL)
	{
		write (2, "Error\n", 6);
		return (0);
	}
	stack_b = NULL;

	// PRINT STACK CONTENT

	printf("STACK_A INITIALIZED : \n");
	temp_clone1 = stack_a;
	while (temp_clone1)
	{
		printf ("CONTENT : %d", temp_clone1->content);
		printf (" | INDEX : %d \n", temp_clone1->index);
		temp_clone1 = temp_clone1->next;
	}

	// MANEUVERS
	
	//rotate_a(&stack_a);
	//rotate_a(&stack_a);
	//rotate_a(&stack_a);

	//push_b(&stack_a, &stack_b);
	//push_b(&stack_a, &stack_b);
	//push_b(&stack_a, &stack_b);
	//push_b(&stack_a, &stack_b);
	//push_b(&stack_a, &stack_b);
	//push_b(&stack_a, &stack_b);
	//push_b(&stack_a, &stack_b);
	//swap_a(&stack_a);
	//push_a(&stack_a, &stack_b);
	//swap_b(&stack_b);

	//push_b(&stack_a, &stack_b);
	//push_b(&stack_a, &stack_b);
	//push_b(&stack_a, &stack_b);

	//rotate_b(&stack_b);
	//rotate_b(&stack_b);
	//rotate_b(&stack_b);

	//reverse_rotate_a(&stack_a);
	//reverse_rotate_b(&stack_b);
	//push_a(&stack_a, &stack_b);
	//push_a(&stack_a, &stack_b);

	//double_reverse_rotate(&stack_a, &stack_b);
	
	/*
	push_b(&stack_a, &stack_b);
	push_b(&stack_a, &stack_b);
	swap_b(&stack_b);
	push_b(&stack_a, &stack_b);
	push_b(&stack_a, &stack_b);
	push_a(&stack_a, &stack_b);

	push_b(&stack_a, &stack_b);
	push_b(&stack_a, &stack_b);
	push_b(&stack_a, &stack_b);
	push_a(&stack_a, &stack_b);
	push_a(&stack_a, &stack_b);
	push_b(&stack_a, &stack_b);
	push_b(&stack_a, &stack_b);
	push_b(&stack_a, &stack_b);
	push_a(&stack_a, &stack_b);
	*/

	// REPRINTING TO VERIFY

	printf("STACK_A AFTER_OP : \n");
	temp_clone2 = stack_a;
	while (temp_clone2)
	{
		printf ("%d \n", temp_clone2->content);
		temp_clone2 = temp_clone2->next;
	}

	temp_clone3 = stack_b;
	printf("STACK_B AFTER_OP : \n");
	while (temp_clone3)
	{
		printf ("%d \n", temp_clone3->content);
		temp_clone3 = temp_clone3->next;
	}
	return (0);
}
