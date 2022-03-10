/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:51:40 by eassofi           #+#    #+#             */
/*   Updated: 2022/03/10 18:41:32 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_and_push(t_list **a, int nb, char **str, int i)
{
	long	b;

	while (i < nb)
	{
		if (!check_arg(str[i]) || !check_duplicate(str))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		b = ft_atoi(str[i]);
		if (b > INT_MAX || b < INT_MIN)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		push(a, b);
		i++;
	}
	return (0);
}

void	sort_for_more_args(t_list **a, t_list **b, int ac)
{
	if (ac - 1 == 1)
		return ;
	else if (ac - 1 == 2)
		sort_2_numbers(a);
	else if (ac - 1 == 3)
		sort_3_numbers(a);
	else if (ac - 1 <= 10)
		sort_10_numbers(a, b, ac - 1);
	else if (ac - 1 >= 11 && ac - 1 < 200)
		sort_algo(a, b, ac - 1);
	else
		sort_algo500(a, b, ac - 1);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	int		ret;
	char	**nb;

	stack_a = NULL;
	stack_b = NULL;
	nb = NULL;
	i = 0;
	if (ac - 1 <= 0)
		return (1);
	else if (ac - 1 >= 1)
	{
		i = 1;
		ret = check_and_push(&stack_a, ac, av, i);
		if (ret == 0)
			sort_for_more_args(&stack_a, &stack_b, ac);
		else
			return (1);
	}
}
