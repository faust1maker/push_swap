/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 09:54:11 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/31 15:18:24 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_master_sorter(t_list **stack_a, t_list **stack_b)
{
	if (ft_list_size(*stack_a) <= 5)
		ft_junior_sorter(stack_a, stack_b);
	else
		ft_radix_sorter(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (!ft_input_checker(ac, av))
	{
		ft_error_printer();
		return (0);
	}
	stack_a = ft_master_parser(av);
	stack_b = NULL;
	if (stack_is_sorted(&stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
	ft_master_sorter(&stack_a, &stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
