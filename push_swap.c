/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:20:14 by juha              #+#    #+#             */
/*   Updated: 2022/07/06 14:49:59 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
int	main(int argc, char **argv)
{
	t_stack	*top_a;
	t_stack	*top_b;
	t_stack	*tail_a;
	t_stack	*tail_b;

	check_error(argc, argv);
	make_stack(&top_a, &tail_a, argc, argv);
	while (tail_a != top_a)
	{
		printf("%d\n", tail_a->idx);
		tail_a = tail_a->next;
	}
	return (0);
}
