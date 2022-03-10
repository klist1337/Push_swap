/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 00:36:22 by eassofi           #+#    #+#             */
/*   Updated: 2022/03/06 23:51:26 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_algo_part1(t_list **a, t_list **b, int len)
{
	t_list	*tmp;
	int		key_nbr;
	int		size;

	size = len;
	while (size >= approch_val(len / 4))
	{
		key_nbr = get_key_nbr2(a);
		while (check_under_key_nbr(*a, key_nbr))
		{
			if ((*a)->content <= key_nbr)
			{
				tmp = *a;
				p_x(b, a, "pb\n");
				size--;
				free(tmp);
			}
			else
				proximity1(a, key_nbr);
		}
	}
}

void	sort_algo_part2(t_list **a, t_list **b, int size)
{
	t_list	*tmp;
	int		min;

	min = 0;
	tmp = NULL;
	while (*a && !check_sort(a, size))
	{
		min = get_min2(*a);
		tmp = (*a)->next;
		while ((*a)->content != min && tmp && tmp->content == min)
			sx(a, "sa\n");
		while (ft_lstsize(*a) && check_under_key_nbr(*a, min))
		{
			if ((*a)->content == min)
			{
				tmp = *a;
				p_x(b, a, "pb\n");
				size--;
				free(tmp);
			}
			else
				proximity1(a, min);
		}
	}
}

void	sort_algo_part3(t_list **a, t_list **b, int max)
{
	t_list	*tmp;

	tmp = NULL;
	while (*b)
	{
		max = get_max(*b);
		while (check_upper_key_nbr(*b, max))
		{
			max = get_max(*b);
			tmp = (*b)->next;
			while ((*b)->content != max && tmp && tmp->content == max)
				sx(b, "sb\n");
			while ((*b)->content != max && *b)
				proximity_max(b, max);
			while (*b && (*b)->content == max)
			{
				tmp = *b;
				p_x(a, b, "pa\n");
				max = get_max(*b);
				free(tmp);
			}
		}
	}
}

void	sort_algo(t_list **a, t_list **b, int len)
{
	int	max;

	max = 0;
	sort_algo_part1(a, b, len);
	sort_algo_part2(a, b, len);
	sort_algo_part3(a, b, max);
}
