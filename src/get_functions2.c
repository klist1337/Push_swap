/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_functions2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 00:54:49 by eassofi           #+#    #+#             */
/*   Updated: 2022/03/06 23:46:26 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_max(t_list *lst)
{	
	t_list	*tmp;
	int		max;

	max = 0;
	tmp = NULL;
	if (lst)
	{
		max = lst->content;
		tmp = lst;
		while (lst)
		{
			if (lst->content >= max)
				max = lst->content;
			lst = lst->next;
		}
		lst = tmp;
	}
	return (max);
}

int	get_min2(t_list *lst)
{
	int	min;

	min = lst->content;
	while (lst)
	{
		if (lst->content < min)
			min = lst->content;
		lst = lst->next;
	}
	return (min);
}
