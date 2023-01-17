/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_input_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:53:21 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/16 14:52:57 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_int_overflow_checker(char *str)
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
	if ((res > INT_MAX) || (res * sign < INT_MIN))
	{
		printf("ERROR : %ld is overflowing INT_MAX/MIN values \n", res);
		return (0);
	}
	return (1);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_comparator(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 2;
	while (av[i])
	{
		while (av[j])
		{
			if (!ft_strcmp(av[i], av[j]))
			{
				printf("ERROR(strcmp) : %s is the same as %s, enter different values \n", av[i], av[j]);
				return (0);
			}
			j++;
		}
		i++;
		j = i + 1;
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
	if (!ft_comparator(av))
		return (0);
	return (1);
}
