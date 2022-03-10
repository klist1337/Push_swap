/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 00:30:19 by eassofi           #+#    #+#             */
/*   Updated: 2022/03/03 23:29:37 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*copy_stack(t_list *stack)
{
	t_list	*dup;

	if (!stack)
		return (NULL);
	dup = (t_list *)malloc(sizeof (t_list));
	dup->content = stack->content;
	dup->next = copy_stack(stack->next);
	return (dup);
}

void	proximity1(t_list **a, int key)
{
	int	index;
	int	proximity;

	index = get_index(*a, key);
	proximity = approch_val(ft_lstsize(*a) / 2);
	if (proximity > index)
		rx(a, "ra\n");
	else
		rrx(a, "rra\n");
}

void	proximity_max(t_list **b, int max)
{
	int	index;
	int	proximity;

	proximity = approch_val(ft_lstsize(*b) / 2);
	index = get_index(*b, max);
	if (proximity > index && *b)
		rx(b, "rb\n");
	else if (*b)
		rrx(b, "rrb\n");
}
