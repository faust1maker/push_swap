/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:47:06 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/17 11:33:31 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_list
{
	struct s_list	*next;
	int				content;
}	t_list;

// INPUTS CHECKERS

int	ft_comparator(char **av);
int	ft_format_checker(char *str);
int	ft_input_checker(int ac, char **av);
int	ft_int_overflow_checker(char *str);
int	ft_strcmp(const char *s1, const char *s2);

// INPUTS PARSING

int	ft_atoi(char *str);
void	ft_lstadd_front(t_list **pile, t_list *new);
t_list	*ft_lstnew(int input);
t_list	*ft_master_parser(char **av);

// LIST UTILS

int	ft_list_size(t_list *list);
t_list	*ft_get_previous(t_list *head, t_list *element);

// LIST MANEUVERS

void	swap_a(t_list **stack_a);

#endif
