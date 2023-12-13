/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:29:36 by ounal             #+#    #+#             */
/*   Updated: 2023/12/12 15:56:33 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	do_rerotateab(t_stack **stack)
{
	t_stack	*iter;

	if (!(*stack) || !(*stack)->next)
		return ;
	iter = *stack;
	while (iter->next->next)
		iter = iter->next;
	iter->next->next = *stack;
	*stack = iter->next;
	iter->next = NULL;
}

void	do_rra(t_stack **stack_a, int flag)
{
	do_rerotateab(stack_a);
	if (flag)
		write(1, "rra\n", 4);
}

void	do_rrb(t_stack **stack_b, int flag)
{
	do_rerotateab(stack_b);
	if (flag)
		write(1, "rrb\n", 4);
}
