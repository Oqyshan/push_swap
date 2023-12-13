/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctrls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:43:15 by ounal             #+#    #+#             */
/*   Updated: 2023/12/12 17:48:51 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_duplicate(char **argv)
{
	int	i;
	int	j;

	i = -1;
	while (argv[++i])
	{
		j = i;
		while (argv[++j])
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (0);
	}
	return (1);
}

int	is_int(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
		i++;
	if (!argv[i])
		return (0);
	while (argv[i] >= '0' && argv[i] <= '9')
		i++;
	if (!argv[i])
		return (1);
	return (0);
}

int	doing_controls(char **argv)
{
	int	i;

	i = 0;
	if (argv[i] == NULL)
		return (0);
	while (argv[i])
		if (!is_int(argv[i++]))
			return (0);
	i = 0;
	while (argv[i])
		if (!is_max_int(argv[i++]))
			return (0);
	return (1);
}

void	argument_check(int argc, char **argv, int *flag)
{
	if (!doing_controls(argv) || !is_duplicate(argv))
	{
		if (flag && argc == 2)
			free_all(argv);
		error_exit(0, 0);
	}
}

char	**adding_list(int argc, char **argv, int *flag)
{
	if (argc == 2 && ft_strlen(argv[1]))
	{
		argv = argv + 1;
		argv = ft_cut(*argv);
		*flag = 1;
	}
	else if (ft_strlen(argv[1]))
		argv = argv + 1;
	else
		argv = NULL;
	return (argv);
}
