/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:52:35 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/18 10:38:29 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	long int	res;

	i = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	res = 0;
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		res = ((res * 10) + (str[i] - 48));
		i++;
	}
	return (res * sign);
}

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

void	ft_lstadd_front(t_list **pile, t_list *new)
{
	if (pile != NULL)
	{
		new->next = *pile;
		*pile = new;
	}
}

void	ft_pop_element(t_list **pile)
{
	t_list	*temp;

	if (*pile == NULL)
		return ;
	temp = *pile;
	*pile = (*pile)->next;
	free(temp);
}

t_list	*ft_master_parser(char **av)
{
	int		i;
	int		input;
	t_list	*pile;

	pile = NULL;
	i = 1;
	input = 0;
	while (av[i])
	{
		input = ft_atoi(av[i]);
		ft_lstadd_front(&pile, ft_lstnew(input));
		i++;
	}
	if (!ft_check_duplicates(pile))
		return (NULL);
	return (pile);
}
