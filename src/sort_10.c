/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 00:05:13 by eassofi           #+#    #+#             */
/*   Updated: 2022/03/06 23:46:14 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_10_numbers_part1(t_list **a, t_list **b, int len)
{
	t_list	*tmp;
	int		key_nbr;
	int		size;

	size = len;
	while (size > 3 && !check_sort(a, size))
	{
		key_nbr = get_min2(*a);
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
		sort_3_numbers(a);
	}
}

void	sort_10_numbers_part2(t_list **a, t_list **b, int max)
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

void	sort_10_numbers(t_list **a, t_list **b, int len)
{
	int	max;

	max = 0;
	sort_10_numbers_part1(a, b, len);
	sort_10_numbers_part2(a, b, max);
}
