/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 09:54:11 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/25 10:25:46 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_master_sorter(t_list **stack_a, t_list **stack_b)
{
	if (ft_list_size(*stack_a) <= 5)
		ft_junior_sorter(stack_a, stack_b);
	else if (ft_list_size(*stack_a) > 5 && ft_list_size(*stack_a) <= 100)
		ft_benjamin_radix(stack_a, stack_b);
	else
		ft_bigbrother_cost_calculator(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (!input_checker(ac, av))
	{
		write (2, "Error\n", 6);
		return (0);
	}
	*stack_b = NULL;
	stack_a = ft_master_parser(av);
	if (stack_is_sorted(stack_a))
	{
		ft_free_stack(stack_a);
		ft_free_stack(stack_b);
		return (0);
	}
	ft_master_sorter(stack_a, stack_b);
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
}
