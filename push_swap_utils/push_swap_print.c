/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:37:33 by juha              #+#    #+#             */
/*   Updated: 2022/07/12 22:36:18 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	print_cmd(t_output *cmd)
{
	int	b_cnt;

	b_cnt = 0;
	while (cmd && cmd->pos != P)
	{
		if (cmd->cmd == A)
			
		else if (cmd->cmd == B)
		cmd = cmd->next_node;
	}
}