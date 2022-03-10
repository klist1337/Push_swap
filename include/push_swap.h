/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:57:21 by eassofi           #+#    #+#             */
/*   Updated: 2022/03/08 14:06:59 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <limits.h>

void	push(t_list **node, int data);
void	sx(t_list **node, char *str);
void	rx(t_list **node, char *str);
void	rrx(t_list **node, char *str);
void	p_x(t_list **a, t_list **b, char *str);
void	print_lst(t_list *node);
int		get_index(t_list *lst, int key);
int		get_key_nbr(t_list *lst, int size);
int		get_min(t_list *tmp, int key_nbr);
int		approch_val(float val);
int		get_key_nbr2(t_list **a);
void	sort_2_numbers(t_list **lst);
void	sort_3_numbers1(int a, int b, int c, t_list **lst);
void	aff_and_count(t_list **lst);
void	sort_3_numbers(t_list **lst);
void	sort_10_numbers_part1(t_list **a, t_list **b, int len);
void	sort_10_numbers_part2(t_list **a, t_list **b, int max);
void	sort_10_numbers(t_list **a, t_list **b, int len);
void	swap_list(t_list *a, t_list *b);
void	bubble_sort(t_list *node);
void	proximity1(t_list **a, int key);
void	proximity_max(t_list **b, int max);
int		check_under_key_nbr(t_list *a, int key);
int		check_sort(t_list **node, int len);
int		check_upper_key_nbr(t_list *a, int key_nbr);
int		check_duplicate(char **str);
int		check_arg(char *str);
int		get_max(t_list *lst);
int		get_min2(t_list *lst);
void	sort_algo_part1(t_list **a, t_list **b, int len);
void	sort_algo_part2(t_list **a, t_list **b, int size);
void	sort_algo_part3(t_list **a, t_list **b, int max);
void	sort_algo(t_list **a, t_list **b, int len);
void	sort_algo500_part1(t_list **a, t_list **b, int len);
void	sort_algo500_part2(t_list **a, t_list **b, int size);
void	sort_algo500_part3(t_list **a, t_list **b, int max);
void	sort_algo500(t_list **a, t_list **b, int len);
void	error(void);
void	sort_one_arg(char **n, t_list *a, t_list *b);
int		is_digit(char *str);
int		ft_strcmp(char *s1, char *s2);
void	case_of_one_arg(t_list **a, t_list **b, char *str, char **nb);
void	push_and_sort(t_list *a, t_list *b, char *str, char **nb);
int		check_and_push(t_list **a, int nb, char **str, int i);
t_list	*copy_stack(t_list *stack);
void	sort_for_more_args(t_list **a, t_list **b, int ac);
void	delete_list(t_list **a);
#endif
