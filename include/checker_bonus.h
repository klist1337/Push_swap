/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 20:52:30 by eassofi           #+#    #+#             */
/*   Updated: 2022/03/06 23:48:56 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H
# include "../libft/libft.h"
# include "push_swap.h"
# include "get_next_line.h"

int		check_instructions(char *str);
void	do_rra_or_rrb(char *str, t_list **a, t_list **b);
void	do_rr_or_rrr(char *str, t_list **a, t_list **b);
void	do_instruction(char *str, t_list **a, t_list **b);
int		check_and_push2(t_list **a, int ac, char **str, int i);
void	p_x2(t_list **a, t_list **b, char *str);
#endif