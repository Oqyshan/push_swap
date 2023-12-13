/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:03:09 by ounal             #+#    #+#             */
/*   Updated: 2023/12/12 17:25:50 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_small_b(t_stack **a, t_stack **b, int len)
{
	if (len == 1)
		do_pa(a, b, 1);
	else if (len == 2)
	{
		if ((*b)->data < (*b)->next->data)
			do_sb(b, 1);
		while (len--)
			do_pa(a, b, 1);
	}
	else if (len == 3)
	{
		while (len || !((*a)->data < (*a)->next->data
				&& (*a)->next->data < (*a)->next->next->data))
		{
			if (len == 1 && (*a)->data > (*a)->next->data)
				do_sa(a, 1);
			else if (len == 1 || (len >= 2 && (*b)->data > (*b)->next->data)
				|| (len == 3 && (*b)->data > (*b)->next->next->data))
				len = ft_push(a, b, len, 1);
			else
				do_sb(b, 1);
		}
	}
	return (0);
}

void	ft_quicksort_3a(t_stack **a, t_stack **b, int len)
{
	if (len == 3 && ft_sizelst(*a) == 3)
		ft_mid_stack(a);
	else if (len == 2)
	{
		if ((*a)->data > (*a)->next->data)
			do_sa(a, 1);
	}
	else if (len == 3)
	{
		while (len != 3 || !((*a)->data < (*a)->next->data
				&& (*a)->next->data < (*a)->next->next->data))
		{
			if (len == 3 && (*a)->data > (*a)->next->data
				&& (*a)->next->next->data)
				do_sa(a, 1);
			else if (len == 3 && !((*a)->next->next->data > (*a)->data
					&& (*a)->next->next->data > (*a)->next->data))
				len = ft_push(a, b, len, 0);
			else if ((*a)->data > (*a)->next->data)
				do_sa(a, 1);
			else if (len++)
				do_pa(a, b, 1);
		}
	}
}

int	ft_quicksort_a(t_stack **a, t_stack **b, int len, int count)
{
	int	pivot;
	int	tmp;

	if (is_numbers_sorted(a, 'a', len) == 1)
		return (1);
	tmp = len;
	if (len <= 3)
	{
		ft_quicksort_3a(a, b, len);
		return (1);
	}
	if (ft_get_middle(&pivot, a, len) == 0)
		return (0);
	while (len != tmp / 2 + tmp % 2)
	{
		if ((*a)->data < pivot && (len--))
			do_pb(b, a, 1);
		else if (++count)
			do_ra(a, 1);
	}
	while (tmp / 2 + tmp % 2 != ft_sizelst(*a) && count--)
		do_rra(a, 1);
	return (ft_quicksort_a(a, b, tmp / 2 + tmp % 2, 0)
		&& (ft_quicksort_b(a, b, tmp / 2, 0)));
	return (1);
}

int	ft_quicksort_b(t_stack **a, t_stack **b, int len, int count)
{
	int	pivot;
	int	tmp;

	if (is_numbers_sorted(b, 'b', len) == 1)
		while (len--)
			do_pa(a, b, 1);
	if (len <= 3)
	{
		ft_sort_small_b(a, b, len);
		return (1);
	}
	tmp = len;
	if (ft_get_middle(&pivot, b, len) == 0)
		return (0);
	while (len != tmp / 2)
	{
		if ((*b)->data >= pivot && len--)
			do_pa(a, b, 1);
		else if (++count)
			do_rb(b, 1);
	}
	while (tmp / 2 != ft_sizelst(*b) && count--)
		do_rrb(b, 1);
	return (ft_quicksort_a(a, b, tmp / 2 + tmp % 2, 0)
		&& ft_quicksort_b(a, b, tmp / 2, 0));
}
