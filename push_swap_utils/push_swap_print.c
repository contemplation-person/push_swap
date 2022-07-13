/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:37:33 by juha              #+#    #+#             */
/*   Updated: 2022/07/13 09:59:45 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	

int	print_cmd(t_output *cmd, int a_cnt)
{
	int	b_cnt;

	b_cnt = 0;
	while (cmd)
	{
		
		if (cmd->cmd == P)
		{
			if (cmd->pos == B)
			{
				b_cnt++;
				a_cnt--;
			}
			else
			{
				a_cnt++;
				b_cnt--;
			}
		}
		if (b_cnt > 1 && a_cnt > 1)
			break ;
		cmd = cmd->next_node;
	}
}
