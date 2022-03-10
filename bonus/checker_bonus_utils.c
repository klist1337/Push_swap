/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 08:03:23 by eassofi           #+#    #+#             */
/*   Updated: 2022/03/10 18:42:33 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

int	check_instructions(char *str)
{
	if (!ft_strcmp(str, "pa\n") || !ft_strcmp(str, "pb\n")
		|| !ft_strcmp(str, "ra\n") || !ft_strcmp(str, "rb\n")
		|| !ft_strcmp(str, "sa\n") || !ft_strcmp(str, "sb\n")
		|| !ft_strcmp(str, "rra\n") || !ft_strcmp(str, "rrb\n")
		|| !ft_strcmp(str, "rrr\n") || !ft_strcmp(str, "rr\n")
		|| !ft_strcmp(str, "ss\n"))
		return (1);
	return (0);
}

void	do_rra_or_rrb(char *str, t_list **a, t_list **b)
{
	if (!ft_strcmp(str, "rra\n"))
		rrx(a, "");
	if (!ft_strcmp(str, "rrb\n"))
		rrx(b, "");
}

void	do_rr_or_rrr(char *str, t_list **a, t_list **b)
{
	if (!ft_strcmp(str, "rr\n"))
	{
		rx(a, "");
		rx(b, "");
	}
	if (!ft_strcmp(str, "rrr\n"))
	{
		rrx(a, "");
		rrx(b, "");
	}
}

void	do_instruction(char *str, t_list **a, t_list **b)
{
	if (!ft_strcmp(str, "pb\n"))
		p_x2(b, a, "");
	if (!ft_strcmp(str, "pa\n"))
		p_x2(a, b, "");
	if (!ft_strcmp(str, "ra\n"))
		rx(a, "");
	if (!ft_strcmp(str, "rb\n"))
		rx(b, "");
	if (!ft_strcmp(str, "sa\n"))
		sx(a, "");
	if (!ft_strcmp(str, "sb\n"))
		sx(b, "");
	if (!ft_strcmp(str, "rra\n" ) || !ft_strcmp(str, "rrb\n"))
		do_rra_or_rrb(str, a, b);
	if (!ft_strcmp(str, "rrr\n") || !ft_strcmp(str, "rr\n"))
		do_rr_or_rrr(str, a, b);
	if (!ft_strcmp(str, "ss\n"))
	{
		sx(a, "");
		sx(b, "");
	}
}

int	check_and_push2(t_list **a, int ac, char **str, int i)
{
	long	nb;

	nb = 0;
	while (i < ac)
	{
		if (!check_arg(str[i]) || !check_duplicate(str)
			|| !ft_strcmp(str[i], ""))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		nb = ft_atoi(str[i]);
		if (nb > INT_MAX || nb < INT_MIN)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		push(a, nb);
		i++;
	}
	if (ac - 1 == 1)
		return (1);
	return (0);
}
