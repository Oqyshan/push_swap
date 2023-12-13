/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:29:55 by ounal             #+#    #+#             */
/*   Updated: 2023/12/12 17:21:51 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	do_swapab(t_stack **stack)
{
	t_stack	*iter;

	if (!(*stack) || !(*stack)->next)
		return ;
	iter = *stack;
	iter = iter->next;
	(*stack)->next = iter->next;
	iter->next = (*stack);
	(*stack) = iter;
}

void	do_sa(t_stack **stack_a, int flag)
{
	do_swapab(stack_a);
	if (flag)
		write(1, "sa\n", 3);
}

void	do_sb(t_stack **stack_b, int flag)
{
	do_swapab(stack_b);
	if (flag)
		write(1, "sb\n", 3);
}
