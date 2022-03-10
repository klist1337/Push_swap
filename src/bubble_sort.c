/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 00:23:27 by eassofi           #+#    #+#             */
/*   Updated: 2022/02/28 01:44:27 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_list(t_list *a, t_list *b)
{
	int	tmp;

	tmp = a->content;
	a->content = b->content;
	b->content = tmp;
}

void	bubble_sort(t_list *node)
{
	t_list	*tmp;
	int		i;
	int		swapped;

	i = 0;
	swapped = 1;
	while (swapped)
	{
		tmp = node;
		swapped = 0;
		while (tmp->next)
		{
			if (tmp->content > tmp->next->content)
			{
				swap_list(tmp, tmp->next);
				swapped = 1;
			}
			tmp = tmp->next;
		}
	}
}
