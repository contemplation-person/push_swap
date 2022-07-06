/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 08:13:17 by juha              #+#    #+#             */
/*   Updated: 2022/07/06 14:57:10 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_stack	*new_node(int data, int idx)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	new->idx = idx;
	new->data = data;
	new->next = new;
	new->prev = new;
	return (new);
}

static void	init_stack_a(t_stack **top_a, t_stack **tail_a, \
int argc, char **argv)
{
	int		temp;

	temp = argc;
	while (0 < --temp)
	{
		*top_a = new_node(ft_atoi(argv[temp]), 0);
		if (argc - 1 == temp)
		{
			*tail_a = *top_a;
			continue ;
		}
		(*top_a)->next = *tail_a;
		if (argc - 2 == temp)
		{
			(*tail_a)->prev = *top_a;
			(*tail_a)->next = *top_a;
			(*top_a)->prev = *tail_a;
		}
		else
		{
			(*top_a)->prev = (*tail_a)->prev;
			(*top_a)->prev->next = (*top_a);
			(*tail_a)->prev = *top_a;
		}
	}
}

void	index_stack_a(t_stack *tail_a)
{
	t_stack	*end;
	t_stack	*i;

	end = tail_a->prev;
	while (tail_a->next != end)
	{
		while (tail_a->next != end)
		{
			if (top_a->data < i->data)
				(i->idx)++;
			i = i->next;
		}
		tail_a = tail_a->next;
	}
}

void	make_stack(t_stack **top_a, t_stack **tail_a, int argc, char **argv)
{
	init_stack_a(top_a, tail_a, argc, argv);
	index_stack_a(*tail_a);
}
