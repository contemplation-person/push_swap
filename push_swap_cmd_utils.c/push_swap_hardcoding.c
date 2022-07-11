/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_hardcoding.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:03:54 by juha              #+#    #+#             */
/*   Updated: 2022/07/11 17:30:45 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_sort_3(t_stack_arr *b, t_output *head)
{
	if (b->size == 0)
		return ;
	if (b->stack[0] == 1)
	{
		s(head, 'a', )
	}
		write(1, "sa\nra\n", 6);
	else if (b->stack[0] == 2 && b->stack[1] == 1)
		write(1, "sa\n", 3);
	else if (b->stack == 2)
		write(1, "rra\n", 4);
	else if (b->stack == 3 && b->stack[1] == 1)
		write(1, "ra\n", 3);
	else
		write(1, "ra\nra\n", 6);
}

void	sort_3(t_stack_arr *a, t_output *head)
{
	if (a->size == 0)
		return ;
	if (a->stack[0] == 1)
	{
		s(head, 'a', a);
		r(head, 'a', a);
	}
	else if (a->stack[0] == 2 && a->stack[1] == 1)
		s(head, 'a', a);
	else if (a->stack == 2)
		rr(head, 'a', a);
	else if (a->stack == 3 && a->stack[1] == 1)
		r(head, 'a', a);
	else
	{
		r(head, 'a', a);
		r(head, 'a', a);
	}
}

void	sort_4(t_stack_arr *a, t_stack_arr *b, t_output *head)
{
	int search_4;
	
	search_4 = a->p_pos;
	while (a->stack[search_4 % a->size] != 4)
	{
		if (a->stack[++search_4 % a->size] == 0)
			search_4++;
	}
	if (search_4 % a->size == 4)
		write(1, "sa\n", 3);
	else if (a[2] == 4)
		write(1, "ra\n", 3);
	else if (a[3] == 4)
		write(1, "rra\n", 4);
	write(1, "pb\n", 3);
	sort_3(a + 1);
	write(1, "pa\n", 3);
}

void	sort_5(int *a, int *b)
{
	if ()
}

void excute_hardcoding(t_output *head, t_stack_arr *a, t_stack_arr *b)
{
	int	top_a;

	top_a = 0;
	if (a->size == 2)
		s(head, 'a', a);
	else if (a->size == 3)
		sort_3(a, head);
	else if (a->size == 4)
		sort_4(a, b);	
	else if (a->size == 5)
		sort_5(a, b);

}
