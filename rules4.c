/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:29:21 by ounal             #+#    #+#             */
/*   Updated: 2023/12/12 17:35:34 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	ft_push_2(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*box;

	if (!(*stack_a))
		return ;
	tmp = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	box = (*stack_b);
	(*stack_b) = tmp;
	(*stack_b)-> next = box;
}

void	do_pa(t_stack **stack_a, t_stack **stack_b, int flag)
{
	ft_push_2(stack_b, stack_a);
	if (flag == 1)
		write(1, "pa\n", 3);
}

void	do_pb(t_stack **stack_b, t_stack **stack_a, int flag)
{
	ft_push_2(stack_a, stack_b);
	if (flag == 1)
		write(1, "pb\n", 3);
}
