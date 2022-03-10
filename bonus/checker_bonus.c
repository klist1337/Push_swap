/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:33:35 by eassofi           #+#    #+#             */
/*   Updated: 2022/03/10 18:42:05 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

void	p_x2(t_list **a, t_list **b, char *str)
{
	t_list		*tmp;

	if (!*b)
		return ;
	tmp = (*b)->next;
	ft_lstadd_front(a, *b);
	*b = tmp;
	ft_putstr_fd(str, 1);
}

int	read_instruction(int fd, t_list **stack_a, t_list **stack_b)
{
	char	*line;

	line = get_next_line(fd);
	while (line)
	{
		if (check_instructions(line))
			do_instruction(line, stack_a, stack_b);
		else
		{
			write(2, "Error\n", 6);
			return (1);
			break ;
		}
		free(line);
		line = get_next_line(fd);
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	int		fd;

	i = 1;
	fd = 0;
	stack_b = NULL;
	stack_a = NULL;
	if (ac - 1 == 0)
		return (1);
	if (check_and_push2(&stack_a, ac, av, i) == 1)
		return (1);
	if (read_instruction(fd, &stack_a, &stack_b) == 1)
		return (1);
	if (!ft_lstsize(stack_b) && check_sort(&stack_a, ac - 1))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
