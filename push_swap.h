/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:47:06 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/18 10:37:19 by fbrisson         ###   ########.fr       */
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

// INPUT CHECKERS

int	ft_check_duplicates(t_list *pile);
int	ft_format_checker(char *str);
int	ft_input_checker(int ac, char **av);
int	ft_int_overflow_checker(char *str);

// INPUT PARSING

int	ft_atoi(char *str);
void	ft_lstadd_front(t_list **pile, t_list *new);
t_list	*ft_lstnew(int input);
t_list	*ft_master_parser(char **av);

// LIST UTILS

int	ft_list_size(t_list *list);
void	ft_pop_element(t_list **pile);
t_list	*ft_get_previous(t_list *head, t_list *element);

// LIST MANEUVERS

void	swap_a(t_list **stack_a);
void	swap_b(t_list **stack_b);
void	double_swap(t_list **stack_a, t_list **stack_b);

void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);

#endif
