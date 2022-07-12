/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_cmd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 08:18:46 by juha              #+#    #+#             */
/*   Updated: 2022/07/12 10:37:06 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r(t_output *head, char stack_name, t_stack_arr *changing);
void	rr(t_output *head, char stack_name, t_stack_arr *changing);
void	s(t_output *head, char stack_name, t_stack_arr *changing);
void	p(t_output *head, char stack_name, t_stack_arr *a, t_stack_arr *b);

void	r(t_output *head, char stack_name, t_stack_arr *changing)
{
	if (changing->size > 2)
		return ;
	if (stack_name == 'a')
		new_one_way_node(head, R, A);
	else
		new_one_way_node(head, R, B);
	while (changing->stack[changing->p_pos] == 0)
		changing->p_pos += R;
}

void	rr(t_output *head, char stack_name, t_stack_arr *changing)
{
	if (changing->size > 2)
		return ;
	if (stack_name == 'a')
		new_one_way_node(head, RR, A);
	else
		new_one_way_node(head, RR, B);
	while (changing->stack[changing->p_pos] == 0)
		changing->p_pos += RR;
}

void	s(t_output *head, char stack_name, t_stack_arr *changing)
{
	int	temp;
	int	switch_pos;

	if (changing->size > 2)
		return ;
	if (stack_name == 'a')
		new_one_way_node(head, S, A);
	else
		new_one_way_node(head, S, B);
	switch_pos = changing->p_pos + 1;
	while (changing->stack[switch_pos] != 0)
		switch_pos += 1;
	temp = changing->stack[changing->p_pos];
	changing->stack[changing->p_pos] = changing->stack[switch_pos];
	changing->stack[switch_pos] = temp;
}

void	p(t_output *head, char stack_name, t_stack_arr *a, t_stack_arr *b)
{
	if (stack_name == 'a')
	{
		if (a->size == 0)
			return ;
		new_one_way_node(head, P, A);
		a->p_pos += 1;
		while (a->stack[a->p_pos] != 0)
			a->p_pos += 1;
		a->stack[a->p_pos] = b->stack[b->p_pos];
		b->stack[b->p_pos] = 0;
		b->p_pos -= 1;
		while (b->stack[b->p_pos] != 0)
			b->p_pos -= 1;
		return ;
	}
	if (b->size == 0)
		return ;
	new_one_way_node(head, P, B);
	b->p_pos += 1;
	while (b->stack[b->p_pos] != 0)
		b->p_pos += 1;
	b->stack[b->p_pos] = a->stack[a->p_pos];
	a->stack[a->p_pos] = 0;
	while (a->stack[a->p_pos] != 0)
		a->p_pos -= 1;
}
