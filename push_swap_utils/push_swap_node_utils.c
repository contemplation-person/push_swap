/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_node_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 08:13:17 by juha              #+#    #+#             */
/*   Updated: 2022/07/04 08:52:18 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*init_node(t_node *head, int data)
{
	head->idx = 0;
	head->edge = FRONT;
	head->position = 'A';
	head->data = data;
	head->next = NULL;
	head->pre = NULL;
	return (head);
}

t_node	*add_front_node(t_node *head, t_node *new_node, int argc)
{
	
}
