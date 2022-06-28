/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:30:29 by juha              #+#    #+#             */
/*   Updated: 2022/06/28 10:31:01 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
/* 
	0 이면 앞에 두개를 끌어다 사용!
*/
typedef enum s_cmd
{
	SA = 1,
	SB = -1,
	RA = 2,
	RB = -2,
	RRA = 3,
	RRB = -3,
	PA = 4,
	PB = 5
}t_cmd;

typedef enum s_state
{
	ERROR = 0,
	SUCCESS = 1,
	CONTINUE = 2
}t_state;

typedef struct s_circlar_queue
{
	int						data;
	struct s_circlar_queue	*next;
}	t_circular_q;

#endif