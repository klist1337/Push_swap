/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:35:57 by eassofi           #+#    #+#             */
/*   Updated: 2022/03/02 16:10:50 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_index(t_list *lst, int key)
{
	int	index;
	int	i;

	index = 0;
	i = 1;
	while (lst)
	{
		if (lst->content == key)
			index = i;
		lst = lst->next;
		i++;
	}
	return (index);
}

int	get_key_nbr(t_list *lst, int size)
{
	t_list		*tmp;
	int			index;
	int			nbr;

	tmp = lst;
	index = 1;
	nbr = 0;
	while (tmp->next)
	{
		if (index == size)
		{
			nbr = tmp->content;
			break ;
		}
		tmp = tmp->next;
		index++;
	}
	return (nbr);
}

int	get_min(t_list *tmp, int key_nbr)
{
	int	min;

	min = 0;
	while (tmp)
	{
		if (tmp->content <= key_nbr)
		{
			min = tmp->content;
		}
		tmp = tmp->next;
	}
	return (min);
}

int	approch_val(float val)
{
	int	n;

	n = (int)val;
	if (val - n >= 0.5)
		return ((int)val + 1);
	else
		return ((int)val);
}

int	get_key_nbr2(t_list **a)
{
	t_list	*k;
	int		key_nbr;
	int		len;
	int		size;

	key_nbr = 0;
	size = 0;
	k = copy_stack(*a);
	bubble_sort(k);
	len = ft_lstsize(k);
	if (len <= 12)
		size = approch_val(len / 2);
	else if (len >= 11 && len < 200)
		size = approch_val(len / 4);
	else if (len >= 200)
		size = approch_val(len / 8);
	key_nbr = get_key_nbr(k, size);
	delete_list(&k);
	return (key_nbr);
}
