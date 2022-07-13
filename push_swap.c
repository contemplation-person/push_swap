/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:20:14 by juha              #+#    #+#             */
/*   Updated: 2022/07/13 14:55:21 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//안되면 이게 문제....
void	make_idx(int argc, int *a, int *b)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 1)
		{
			if (b[i] >= b[j++])
				(a[i])++;
		}
		i++;
	}
	ft_bzero(*b, 4 * (argc - 1));
}

void	init_arr(int argc, char **argv, t_arr_info *a, t_arr_info *b)
{
	int	i;

	if (argc - 1 == 1)
		return (0);
	a->size = argc - 2;
	b->size = argc - 2;
	a->p_pos = 0;
	b->p_pos = 0;
	a->stack = malloc((argc - 1) * sizeof(int));
	if (!a->stack)
		exit(1);
	b->stack = malloc((argc - 1) * sizeof(int));
	if (!b->stack)
		exit(1);
	i = 0;
	while (*(++argv))
		(b->stack)[i++] = (int)ft_atoi(*argv);
	ft_bzero(a->stack, 4 * (argc - 1));
	make_idx(argc, a->stack, b->stack);
}
// follow pointer
t_bool	is_sorting(int *a, int pos_p_top_a, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (a[pos_p_top_a++ % (size)] != i + 1)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int	sort_arr(t_arr_info *a, t_arr_info *b, t_output *cmd_group)
{
	if (is_sorting(a->stack, 0, a->size))
		return (0);
	else if (a->size <= 5)
		excute_hardcoding(cmd_group, a, b);
	return (1);
}
#include <stdio.h>
int	main(int argc, char **argv)
{
	t_arr_info	a;
	t_arr_info	b;
	t_output	*cmd_group;

	check_error(argc, argv);
	init_arr(argc, argv, &a, &b);
	return (sort_arr (&a, &b, cmd_group));
}
