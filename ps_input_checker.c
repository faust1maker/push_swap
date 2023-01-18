/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_input_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:53:21 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/18 11:04:30 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicates(t_list *pile)
{
	t_list	*i;
	t_list	*j;

	i = pile;
	while (i != NULL)
	{
		j = i->next;
		while (j != NULL)
		{
			if (i->content == j->content)
			{
				printf("ERROR : Duplicates found : %d and %d \n", i->content, j->content);
				return (0);
			}
			j = j->next;
		}
		i = i->next;
	}
	return (1);
}

int	ft_int_overflow_checker(char *str)
{
	int	i;
	int	longx2_counter;
	long int	res;

	i = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] == '0')
		i++;
	res = 0;
	longx2_counter = 0;
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		res = ((res * 10) + (str[i] - 48));
		i++;
		longx2_counter++;
	}
	if (longx2_counter > 11)
		res = 2147483649 ;
	if ((res > INT_MAX) || (res * -1 < INT_MIN))
	{
		printf("ERROR : %ld is overflowing INT_MAX/MIN values \n", res);
		return (0);
	}
	return (1);
}

int	ft_format_checker(char *str)
{
	int	i;

	i = 0;
	if (((str[i] == 45) || (str[i] == 43)) && !(str[i + 1] >= 48 && str[i + 1] <= 57))
	{
		printf("ERROR(format, first i) : %s is not respecting the required format (+/-ints) \n", str);
		return (0);
	}
	else
		i++;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			printf("ERROR(format, in i) : %s is not respecting the required format (+/-ints) \n", str);
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_input_checker(int ac, char **av)
{
	int	i;

	if (ac < 2)
	{
		printf("ERROR : Not enough arguments (%d) \n", ac);
		return (0);
	}
	i = 0;
	while (av[++i])
	{
		if (!ft_format_checker(av[i]))
		{
			printf("ERROR(return from format) : %s is not respecting the required format (+/-ints) \n", av[i]);
			return (0);
		}
		if (!ft_int_overflow_checker(av[i]))
		{
			printf("ERROR : INT overflow checker returns false \n");
			return (0);
		}
	}
	return (1);
}
