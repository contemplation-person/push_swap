/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_node_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 08:13:17 by juha              #+#    #+#             */
/*   Updated: 2022/07/01 09:20:51 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*init_node(t_node *head, int data)
{
	head->data = data;
	head->idx = -1;
	head->position = 'A';
	head->next = NULL;
	head->edge = FRONT;
	head->pre = NULL;
	return (head);
}

