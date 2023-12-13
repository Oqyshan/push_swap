/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:17:26 by ounal             #+#    #+#             */
/*   Updated: 2023/12/12 17:49:50 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include "get_next_line/get_next_line_bonus.h"

void	error(t_stack **a, t_stack **b, int flag)
{
	free_stack(a);
	free_stack(b);
	if (flag == 1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

void	checker(char *str, t_stack **a, t_stack **b)
{
	if (!ft_strcmp(str, "ra\n"))
		do_ra(a, 0);
	else if (!ft_strcmp(str, "sa\n"))
		do_sa(a, 0);
	else if (!ft_strcmp(str, "sb\n"))
		do_sb(b, 0);
	else if (!ft_strcmp(str, "ss\n"))
		checker_2(a, b, 1);
	else if (!ft_strcmp(str, "pa\n"))
		do_pa(a, b, 0);
	else if (!ft_strcmp(str, "pb\n"))
		do_pb(b, a, 0);
	else if (!ft_strcmp(str, "rb\n"))
		do_rb(b, 0);
	else if (!ft_strcmp(str, "rra\n"))
		do_rra(a, 0);
	else if (!ft_strcmp(str, "rrb\n"))
		do_rrb(b, 0);
	else if (!ft_strcmp(str, "rrr\n"))
		checker_2(a, b, 0);
	else
	{
		free(str);
		error(a, b, 1);
	}
}

void	print(t_stack **a, t_stack **b)
{
	if (*a && is_numbers_sorted(a, 'a', ft_sizelst(*a)) && !*b)
		write(1, "\033[0;32mOK\n", 10);
	else
		write(1, "\033[0;31mKO\n", 10);
}

void	second_main(t_stack *a, t_stack *b, char **argv, int flag)
{
	char	*str;

	a = stack_init(argv);
	if (flag)
		free_all(argv);
	str = get_next_line(0);
	while (str)
	{
		checker(str, &a, &b);
		free(str);
		str = get_next_line(0);
	}
	print(&a, &b);
	error(&a, &b, 0);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		flag;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	argv = &argv[1];
	if (!ft_strcmp(argv[0], ""))
		return (write(1, "Error\n", 6), 0);
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		flag = 0;
		if (ft_strlen(argv[0]))
		{
			argv = ft_cut(argv[0]);
			flag = 1;
		}
	}
	argument_check(argc, argv, &flag);
	second_main(a, b, argv, flag);
}
