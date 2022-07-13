/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_hardcoding.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:03:54 by juha              #+#    #+#             */
/*   Updated: 2022/07/13 14:51:26 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_arr_info *a, t_output *head);
void	sort_4(t_arr_info *a, t_arr_info *b, t_output *head);
void	sort_5(t_arr_info *a, t_arr_info *b, t_output *head);
void	excute_hardcoding(t_output *head, t_arr_info *a, t_arr_info *b);
int		next_p_pos(t_arr_info *arr, int cnt_p);

int	next_p_pos(t_arr_info *arr, int cnt_p)
{
	int	i;

	i = 0;
	while (i++ < cnt_p)
	{
		while (arr->stack[++(arr->p_pos)] != 0)
			;
	}
	return (arr->p_pos);
}
/*
void	r_sort_3(t_arr_info *b, t_output *head)
{
	if (b->size == 0 || \
	(b->stack[b->p_pos] == 3 && b->stack[next_p_pos(b, 1)] == 2))
		return ;
	if (b->stack[b->p_pos] == 3 && b->stack[next_p_pos(b, 1)] == 1)
		r(head, 'b', b);
	else if (b->stack[b->p_pos] == 2 && b->stack[next_p_pos(b, 1)] == 3)
		s(head, 'b', b);
	else if (b->stack[b->p_pos] == 2)
		rr(head, 'b', b);
	else if (b->stack[b->p_pos] == 1 && b->stack[next_p_pos(b, 1)] == 3)
		r(head, 'b', b);
	else
	{
		r(head, 'b', b);
		r(head, 'b', b);
	}	
}
*/
void	sort_3(t_arr_info *a, t_output *head)
{
	if (a->size == 0)
		return ;
	if (a->stack[a->p_pos] == 1)
	{
		s(head, 'a', a);
		r(head, 'a', a);
	}
	else if (a->stack[a->p_pos] == 2 && a->stack[next_p_pos(a, 1)] == 1)
		s(head, 'a', a);
	else if (a->stack[a->p_pos] == 2)
		rr(head, 'a', a);
	else if (a->stack[a->p_pos] == 3 && a->stack[next_p_pos(a, 1)] == 1)
		r(head, 'a', a);
	else
	{
		r(head, 'a', a);
		r(head, 'a', a);
	}
}

void	sort_4(t_arr_info *a, t_arr_info *b, t_output *head)
{
	int	search_4;

	search_4 = a->p_pos;
	while (a->stack[search_4 % a->size] != 4)
	{
		if (a->stack[++search_4 % a->size] == 0)
			search_4++;
	}
	if (a->stack[next_p_pos(a, 1)] == 4)
		s(head, 'a', a);
	else if (a->stack[next_p_pos(a, 2)] == 4)
		r(head, 'a', a);
	else if (a->stack[next_p_pos(a, 3)] == 4)
		rr(head, 'a', a);
	p(head, 'b', a, b);
	sort_3(a, head);
	p(head, 'a', a, b);
}

void	sort_5(t_arr_info *a, t_arr_info *b, t_output *head)
{
	int	search_5;

	search_5 = a->p_pos;
	while (a->stack[search_5 % a->size] != 5)
	{
		if (a->stack[++search_5 % a->size] == 0)
			search_5++;
	}
	if (a->stack[next_p_pos(a, 1)] == 4)
		s(head, 'a', a);
	else if (a->stack[next_p_pos(a, 2)] == 4)
	{
		r(head, 'a', a);
		r(head, 'a', a);
	}
	else if (a->stack[next_p_pos(a, 3)] == 4)
	{
		rr(head, 'a', a);
		rr(head, 'a', a);
	}
	else if (a->stack[next_p_pos(a, 4)] == 4)
		rr(head, 'a', a);
	p(head, 'b', a, b);
	sort_3(a, head);
	p(head, 'a', a, b);
}

void	excute_hardcoding(t_output *head, t_arr_info *a, t_arr_info *b)
{
	int	top_a;

	top_a = 0;
	if (a->size == 2)
		s(head, 'a', a);
	else if (a->size == 3)
		sort_3(a, head);
	else if (a->size == 4)
		sort_4(a, b, head);
	else if (a->size == 5)
		sort_5(a, b, head);
}
