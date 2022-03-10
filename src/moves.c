/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:28:22 by eassofi           #+#    #+#             */
/*   Updated: 2022/03/07 18:56:31 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_lst(t_list *node)
{
	while (node)
	{
		printf("%d->", node->content);
		node = node->next;
	}
	printf("\n");
}

void	sx(t_list **node, char *str)
{
	t_list	*new;
	int		tmp;

	if (!*node)
		return ;
	new = *node;
	if (new->next)
	{
		tmp = new->content;
		new->content = new->next->content;
		new->next->content = tmp;
	}
	ft_putstr_fd(str, 1);
}

void	rx(t_list **node, char *str)
{
	t_list	*tmp;
	t_list	*last;

	if (!(*node))
		return ;
	if (ft_lstsize(*node) > 1)
	{
		last = ft_lstlast(*node);
		tmp = *node;
		*node = (*node)->next;
		last->next = tmp;
		tmp->next = NULL;
		ft_putstr_fd(str, 1);
	}
}

void	rrx(t_list **node, char *str)
{
	t_list	*tmp;
	t_list	*first;

	tmp = *node;
	first = *node;
	if (!tmp || !tmp->next)
		return ;
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next->next = first;
	*node = tmp->next;
	tmp->next = NULL;
	ft_putstr_fd(str, 1);
}

void	p_x(t_list **a, t_list **b, char *str)
{
	int			tmp;
	t_list		*first;

	if (!*b)
		return ;
	tmp = (*b)->content;
	ft_lstadd_front(a, ft_lstnew(tmp));
	first = *b;
	*b = (*b)->next;
	first->next = NULL;
	ft_putstr_fd(str, 1);
}
