/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:47:06 by fbrisson          #+#    #+#             */
/*   Updated: 2023/01/25 15:03:41 by fbrisson         ###   ########.fr       */
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
	int				index;
}	t_list;

// INPUT CHECKERS

int	ft_check_duplicates(t_list *pile);
int	ft_format_checker(char *str);
int	ft_input_checker(int ac, char **av);
int	ft_int_overflow_checker(char *str);
int	stack_is_sorted(t_list **stack);

// INPUT PARSING

int	ft_atoi(char *str);
void	ft_indexing_stack(t_list **stack);
void	ft_lstadd_back(t_list **list, t_list *new);
t_list	*ft_lstnew(int input);
t_list	*ft_master_parser(char **av);
t_list	*get_minimum(t_list **stack);

// LIST UTILS

int	ft_list_size(t_list *list);
void	ft_free_stack(t_list **stack);
t_list	*ft_lstlast(t_list *list);
t_list	*ft_get_previous(t_list *head, t_list *element);

// LIST MANEUVERS

void	ft_master_sorter(t_list **stack_a, t_list **stack_b);

void	swap_a(t_list **stack_a);
void	swap_b(t_list **stack_b);
void	double_swap(t_list **stack_a, t_list **stack_b);

void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);

void	rotate_a(t_list **stack_a);
void	rotate_b(t_list **stack_b);
void	double_rotate(t_list **stack_a, t_list **stack_b);

void	reverse_rotate_a(t_list **stack_a);
void	reverse_rotate_b(t_list **stack_b);
void	double_reverse_rotate(t_list **stack_a, t_list **stack_b);

#endif
