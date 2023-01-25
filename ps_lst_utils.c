/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:25:44 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/20 10:07:55 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int input)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = input;
	new_list->next = NULL;
	return (new_list);
}

t_list	*ft_lstlast(t_list *list)
{
	if (!list)
		return (NULL);
	while (list->next != NULL)
		list = list->next;
	return (list);
}

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*temp;

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
}

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
