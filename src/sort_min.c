/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:56:32 by eassofi           #+#    #+#             */
/*   Updated: 2022/02/28 01:45:07 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_2_numbers(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	if (!*lst)
		return ;
	if (tmp->next->content <= tmp->content)
		sx(lst, "sa\n");
}

void	sort_3_numbers1(int a, int b, int c, t_list **lst)
{
	if (b <= c && a >= c)
		rx(lst, "ra\n");
	else if (c >= a)
		sx(lst, "sa\n");
	else if (b >= c)
	{
		sx(lst, "sa\n");
		rrx(lst, "rra\n");
	}
}

void	aff_and_count(t_list **lst)
{
	sx(lst, "sa\n");
	rx(lst, "ra\n");
}

void	sort_3_numbers(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	if (tmp->content >= tmp->next->content)
	{
		sort_3_numbers1(tmp->content, tmp->next->content,
			tmp->next->next->content, lst);
	}
	else if (tmp->content <= tmp->next->next->content
		&& tmp->next->content >= tmp->next->next->content)
		aff_and_count(lst);
	else if (tmp->next->content >= tmp->content
		&& tmp->content >= tmp->next->next->content)
		rrx(lst, "rra\n");
}
