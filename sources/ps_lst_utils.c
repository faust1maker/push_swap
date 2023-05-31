/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:25:44 by fbrisson          #+#    #+#             */
/*   Updated: 2023/03/01 12:56:04 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int input)
{
	t_list	*new_list;

	new_list = malloc(sizeof(*new_list));
	if (!new_list)
		return (NULL);
	new_list->content = input;
	new_list->index = -1;
	new_list->next = NULL;
	return (new_list);
}

t_list	*ft_lstlast(t_list *list)
{
	t_list	*temp;

	temp = list;
	while (temp->next)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (temp);
	}
	return (temp);
}

int	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*temp;

	if (new == NULL)
		return (0);
	if (list)
	{
		if (*list == NULL)
			*list = new;
		else
		{
			temp = ft_lstlast(*list);
			temp->next = new;
		}
	}
	return (1);
}

int	ft_list_size(t_list *list)
{
	unsigned int	size;

	size = 0;
	while (list)
	{
		size++;
		list = list->next;
	}
	return (size);
}
