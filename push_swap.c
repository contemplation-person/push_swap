/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:20:14 by juha              #+#    #+#             */
/*   Updated: 2022/07/08 12:50:49 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_idx(int argc, int **a, int **b)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 1)
		{
			if ((*b)[i] >= (*b)[j++])
				((*a)[i])++;
		}
		i++;
	}
	ft_bzero(*b, 4 * (argc - 1));
}

void	init_arr(int argc, char **argv, int **a, int **b)
{
	int	i;

	*a = malloc((argc - 1) * sizeof(**a));
	if (!*a)
		exit(1);
	*b = malloc((argc - 1) * sizeof(**b));
	if (!*b)
	{
		free(*a);
		exit(1);
	}
	i = 0;
	while (*(++argv))
		(*b)[i++] = (int)ft_atoi(*argv);
	ft_bzero(*a, 4 * (argc - 1));
	make_idx(argc, a, b);
}

// follow pointer
t_bool	is_sorting(int *a, int location_p_top_a, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (a[location_p_top_a++ % (size)] != i + 1)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

void	sort_arr(int argc, int *a, int *b, t_output *cmd_group)
{
	int	size_a;

	size_a = argc - 1;
	if (is_sorting(a, 0, size_a))
		return ;
	else if (argc - 1 <= 5)
		excute_hardcording(a, b, size_a);
}
#include <stdio.h>

int	main(int argc, char **argv)
{
	int			*a;
	int			*b;
	t_output	*cmd_group;

	check_error(argc, argv);
	if (argc - 1 == 1)
		return (0);
	init_arr(argc, argv, &a, &b);
	sort_arr(argc, a, b, cmd_group);
	return (0);
}
