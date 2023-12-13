/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_middle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:27:45 by ounal             #+#    #+#             */
/*   Updated: 2023/12/12 15:56:53 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int	highvalue(t_stack **stack)
{
	int	tmp;

	tmp = (*stack)->data;
	if ((*stack)->next->data > tmp)
		tmp = (*stack)->next->data;
	else if ((*stack)->next->next->data > tmp)
		tmp = (*stack)->next->next->data;
	return (tmp);
}

void	ft_mid_stack(t_stack **stack)
{
	int	tmp;

	tmp = highvalue(stack);
	if ((*stack)->data == tmp)
		do_ra(stack, 1);
	else if ((*stack)->next->data == tmp)
		do_rra(stack, 1);
	if ((*stack)->data > (*stack)->next->data)
		do_sa(stack, 1);
}

void	ft_sort_int_tmp(int *tmp_stack, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (tmp_stack[i] > tmp_stack[j])
			{
				tmp = tmp_stack[i];
				tmp_stack[i] = tmp_stack[j];
				tmp_stack[j] = tmp;
			}
		}
	}
}

int	ft_push(t_stack **a, t_stack **b, int len, int operation)
{
	if (operation == 0)
		do_pb(b, a, 1);
	else
		do_pa(a, b, 1);
	len--;
	return (len);
}

int	ft_get_middle(int *pivot, t_stack **stack_a, int size)
{
	int		i;
	int		*tmp;
	t_stack	*a;

	tmp = (int *)malloc(sizeof(int) * size);
	if (!tmp)
		return (0);
	i = 0;
	a = *stack_a;
	while (i < size)
	{
		tmp[i] = a->data;
		a = a->next;
		i++;
	}
	ft_sort_int_tmp(tmp, size);
	*pivot = tmp[size / 2];
	free(tmp);
	return (1);
}
