/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <fbrisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:47:06 by fbrisson          #+#    #+#             */
/*   Updated: 2023/02/27 11:16:06 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	struct s_list	*next;
	int				content;
	int				index;
}	t_list;

t_list	*ft_lstlast(t_list *list);
t_list	*ft_lstnew(int input);
t_list	*ft_master_parser(char **av);
t_list	*get_minimum(t_list **stack);
void	ft_indexing_stack(t_list **stack);
void	ft_lstadd_back(t_list **list, t_list *new);
void	free_stack(t_list *stack);
void	ft_error_printer(void);
void	ft_pb_minimum(t_list **stack_a, t_list **stack_b, int min);
void	ft_master_sorter(t_list **stack_a, t_list **stack_b);
void	swap(t_list **stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	push(t_list **stack_src, t_list **stack_dest);
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);
void	rotate(t_list **stack);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	reverse_rotate(t_list **stack);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	ft_junior_sorter(t_list **stack_a, t_list **stack_b);
void	ft_radix_sorter(t_list **stack_a, t_list **stack_b);
void	ft_sort_3(t_list **stack_a);
void	ft_sort_4(t_list **stack_a, t_list **stack_b);
void	ft_sort_5(t_list **stack_a, t_list **stack_b);
int		ft_check_duplicates(t_list *pile);
int		ft_format_checker(char *str);
int		ft_input_checker(char **av);
int		ft_int_overflow_checker(char *str);
int		ft_atoi(char *str);
int		ft_list_size(t_list *list);
int		determine_scenario(t_list **stack_a);
int		ft_get_minimum(t_list **stack);
int		stack_is_sorted(t_list **stack);
int		get_max_bits(t_list **stack);
/*

// INPUT CHECKERS

int	ft_check_duplicates(t_list *pile);
int	ft_format_checker(char *str);
int	ft_input_checker(char **av);
int	ft_int_overflow_checker(char *str);

// INPUT PARSING

int	ft_atoi(char *str);
int	ft_list_size(t_list *list);
void	ft_indexing_stack(t_list **stack);
void	ft_lstadd_back(t_list **list, t_list *new);
t_list	*ft_lstlast(t_list *list);
t_list	*ft_lstnew(int input);
t_list	*ft_master_parser(char **av);
t_list	*get_minimum(t_list **stack);

// GENERAL UTILS

int	determine_scenario(t_list **stack_a);
int	ft_get_minimum(t_list **stack);
int	stack_is_sorted(t_list **stack);
void	free_stack(t_list *stack);
void	ft_error_printer(void);
void	ft_pb_minimum(t_list **stack_a, t_list **stack_b, int min);

// LIST MANEUVERS

void	ft_master_sorter(t_list **stack_a, t_list **stack_b);

void	swap(t_list **stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);

void	push(t_list **stack_src, t_list **stack_dest);
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);

void	rotate(t_list **stack);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);

void	reverse_rotate(t_list **stack);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

// SORTING FUNCTIONS

int	get_max_bits(t_list **stack);
void	ft_junior_sorter(t_list **stack_a, t_list **stack_b);
void	ft_radix_sorter(t_list **stack_a, t_list **stack_b);
void	ft_sort_3(t_list **stack_a);
void	ft_sort_4(t_list **stack_a, t_list **stack_b);
void	ft_sort_5(t_list **stack_a, t_list **stack_b);

*/

#endif
