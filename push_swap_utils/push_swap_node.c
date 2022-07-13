/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 08:53:29 by juha              #+#    #+#             */
/*   Updated: 2022/07/13 14:53:03 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	del_one_way_node(t_output *head)
{
	t_output	*del_node;

	while (head)
	{
		del_node = head;
		head = del_node->next_node;
		free(del_node);
	}
}

void	new_one_way_node(t_output *head, t_cmd cmd)
{
	t_output	*new;

	new = malloc(sizeof(t_output));
	if (!new)
	{
		del_one_way_node(head);
		exit(1);
	}
	new->cmd = cmd;
	while (head)
		head = head->next_node;
	head->next_node = new;
}
