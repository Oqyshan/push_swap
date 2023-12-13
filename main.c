/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:22:04 by ounal             #+#    #+#             */
/*   Updated: 2023/12/12 15:56:51 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			flag;

	flag = 0;
	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	if (argc >= 2)
		argv = adding_list(argc, argv, &flag);
	if (argv == NULL || argv[0] == NULL)
	{
		free_stack(&stack_a);
		free_stack(&stack_b);
		return (1);
	}
	argument_check(argc, argv, &flag);
	stack_a = stack_init(argv);
	if (flag)
		free_all(argv);
	sorting_numbers(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
