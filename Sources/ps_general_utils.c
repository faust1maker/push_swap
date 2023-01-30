/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_general_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 09:44:11 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/30 11:19:07 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_distance(t_list **stack, int index)
{
	t_list	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}

int	stack_is_sorted(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->index > head->next->index)
			return (0);
		head = head->next;
	}
	return (1);
}

void	free_stack(t_list *stack)
{
	t_list	*head;
	t_list	*temp;

	head = stack;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

void	ft_error_printer(void)
{
	write (2, "Error\n", 6);
}

void	ft_content_printer(t_list **stack, char *c)
{
	t_list	*temp_list;

	temp_list = *stack;
	while (temp_list)
	{
		printf ("[%s]CONTENT : %d", c, temp_list->content);
		printf (" | INDEX : %d \n", temp_list->index);
		temp_list = temp_list->next;
	}
}
