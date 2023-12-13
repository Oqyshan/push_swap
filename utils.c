/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:23:10 by ounal             #+#    #+#             */
/*   Updated: 2023/12/12 17:50:24 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

char	**free_all(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

int	ft_sizelst(t_stack *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

t_stack	*ft_newlst(int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (0);
	new->data = content;
	new->next = 0;
	return (new);
}

t_stack	*ft_lastlst(t_stack *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}
