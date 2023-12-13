/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ctrl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:24:47 by ounal             #+#    #+#             */
/*   Updated: 2023/12/12 15:56:30 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack **a)
{
	if ((*a)->data > (*a)->next->data && (*a)->data < (*a)->next->next->data
		&& (*a)->next->data < (*a)->next->next->data)
		do_sa(a, 1);
	else if ((*a)->data > (*a)->next->data
		&& (*a)->data > (*a)->next->next->data
		&& (*a)->next->data > (*a)->next->next->data)
	{
		do_sa(a, 1);
		do_rra(a, 1);
	}
	else if ((*a)->data > (*a)->next->data
		&& (*a)->data > (*a)->next->next->data
		&& (*a)->next->data < (*a)->next->next->data)
		do_ra(a, 1);
	else if ((*a)->data < (*a)->next->data
		&& (*a)->data < (*a)->next->next->data
		&& (*a)->next->data > (*a)->next->next->data)
	{
		do_sa(a, 1);
		do_ra(a, 1);
	}
	else if ((*a)->data < (*a)->next->data
		&& (*a)->data > (*a)->next->next->data
		&& (*a)->next->data > (*a)->next->next->data)
		do_rra(a, 1);
}

int	is_numbers_sorted(t_stack **stack, char c, int len)
{
	int			i;
	t_stack		*first;

	i = 1;
	first = *stack;
	if (c == 'a')
	{
		while (i++ < len)
		{
			if (first->data > first->next->data)
				return (0);
			first = first->next;
		}
	}
	if (c == 'b')
	{
		while (i++ < len)
		{
			if (first->data < first->next->data)
				return (0);
			first = first->next;
		}
	}
	return (1);
}

int	sorting_numbers(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_sizelst(*stack_a);
	if (!is_numbers_sorted(stack_a, 'a', size))
	{
		if (size == 2)
			do_sa(stack_a, 1);
		else if (size == 3)
			ft_sort_three(stack_a);
		else
			ft_quicksort_a(stack_a, stack_b, size, 0);
	}
	return (0);
}
