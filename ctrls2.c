/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctrls2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:42:40 by ounal             #+#    #+#             */
/*   Updated: 2023/12/12 15:56:55 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_cut(char *str)
{
	char	**argv;

	argv = NULL;
	if (str != NULL)
		argv = ft_split(str, ' ');
	if (!argv)
		argv = NULL;
	return (argv);
}

t_stack	*stack_init(char **argv)
{
	t_stack	*iter;
	t_stack	*root;
	int		i;
	int		tmp;

	i = 0;
	while (argv[i])
	{
		if (i == 0)
		{
			tmp = ft_atoi(argv[i]);
			root = ft_newlst(tmp);
			iter = root;
		}
		else
		{
			tmp = ft_atoi(argv[i]);
			iter->next = ft_newlst(tmp);
			iter = iter->next;
		}
		i++;
	}
	return (root);
}
