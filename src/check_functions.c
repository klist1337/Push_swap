/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 00:48:37 by eassofi           #+#    #+#             */
/*   Updated: 2022/03/08 14:16:47 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_under_key_nbr(t_list *a, int key)
{
	while (a)
	{
		if (a->content <= key)
			return (1);
		a = a->next;
	}
	return (0);
}

int	check_sort(t_list **node, int len)
{
	t_list	*tmp;

	if (ft_lstsize(*node) != len)
		return (0);
	tmp = *node;
	while (tmp && tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	check_upper_key_nbr(t_list *a, int key_nbr)
{
	while (a)
	{
		if (a->content == key_nbr)
			return (1);
		a = a->next;
	}
	return (0);
}

int	check_duplicate(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (!ft_strcmp(str[i], str[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_arg(char *str)
{
	if (!is_digit(str))
		return (0);
	return (1);
}
