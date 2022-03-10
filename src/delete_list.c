/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:02:47 by eassofi           #+#    #+#             */
/*   Updated: 2022/03/03 23:36:52 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	delete_list(t_list **a)
{
	t_list	*tmp;

	if (!a)
		return ;
	tmp = *a;
	while (*a)
	{
		*a = (*a)->next;
		free(tmp);
		tmp = *a;
	}
}
