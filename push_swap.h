/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:30:29 by juha              #+#    #+#             */
/*   Updated: 2022/06/27 11:58:12 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef enum s_cmd
{
	PA = 0,
	PB = 1,

	SA = 3,
	SB = 4,
	SS = 7,

	RA = 10,
	RB = 11,
	RR = 21,

	RRA = 100,
	RRB = 101,
	RRR = 201
}t_cmd;
#endif