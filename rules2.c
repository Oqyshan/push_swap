/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:27:25 by ounal             #+#    #+#             */
/*   Updated: 2023/12/12 17:23:27 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	do_rotateab(t_stack **stack)
{
	t_stack		*first;
	t_stack		*last;

	if (!(*stack) || !(*stack)->next)
		return ;
	first = (*stack);
	*stack = (*stack)->next;
	last = ft_lastlst(*stack);
	last->next = first;
	first->next = NULL;
}

void	do_ra(t_stack **stack_a, int flag)
{
	do_rotateab(stack_a);
	if (flag)
		write (1, "ra\n", 3);
}

void	do_rb(t_stack **stack_b, int flag)
{
	do_rotateab(stack_b);
	if (flag)
		write (1, "rb\n", 3);
}
