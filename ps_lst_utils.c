/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:25:44 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/17 11:11:34 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_list_size(t_list *list)
{
	unsigned int	size;

	size = 0;
	while (list->next != NULL)
	{
		list = list->next;
		size++;
	}
	printf("LIST SIZE : %d \n", size);
	return (size);
}

t_list	*ft_get_previous(t_list *head, t_list *element)
{
	t_list *temp;

	temp = head;
	if ((temp == NULL) || (element == NULL))
		return (NULL);
	if (temp == element)
		return (NULL);
	while (temp->next != NULL)
	{
		if (temp->next == element)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
