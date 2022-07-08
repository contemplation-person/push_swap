/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:20:14 by juha              #+#    #+#             */
/*   Updated: 2022/07/08 11:28:39 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
void	make_idx(int argc, int **a, int **b)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 2)
		{
			if ((*b)[i] > (*b)[j++])
				((*a)[i])++;
		}
		i++;
	}
	ft_bzero(*b, 4 * (argc - 1)); // 안안되되면  여여기  문문제제	
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
	ft_bzero(*a, 4 * (argc - 1)); // 안안되되면  여여기  문문제제
	make_idx(argc, a, b);
}

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;

	check_error(argc, argv);
	init_arr(argc, argv, &a, &b);
	printf("a :");
	for(int i = 0 ;i < argc -1; i++)
	{
		printf("%d, ", a[i]);
	}
	return (0);
}
