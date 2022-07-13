/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:30:29 by juha              #+#    #+#             */
/*   Updated: 2022/07/13 14:52:07 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
/* 
	0 이면 앞에 두개를 끌어다 사용!
*/
typedef enum s_cmd
{
	PA = 0,
	SA,
	RA,
	RRA,
	PB,
	SB,
	RB,
	RRB,
}t_cmd;

typedef enum s_pos
{
	A = 0,
	B = 1,
}t_pos;

typedef enum s_bool
{
	TRUE = -1,
	FALSE = 0,
}t_bool;

typedef struct s_arr_info
{
	int	*stack;
	int	p_pos;
	int	size;
}t_arr_info;

typedef struct t_output
{
	t_cmd			cmd;
	struct t_output	*next_node;
}	t_output;

size_t	change_size_t(const char *str);
size_t	ft_strlen(const char	*s);
long	ft_atoi(const char	*str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *s, size_t n);

void	del_one_way_node(t_output *head);
void	new_one_way_node(t_output *head, t_cmd	cmd);

t_bool	write_error_message(char *message);
t_bool	is_int_max(char *argv);
t_bool	is_duplicate(int argc, char **argv);
t_bool	is_wrong_input(char *argv);
t_bool	check_error(int argc, char **argv);

//void	r_sort_3(t_arr_info *b, t_output *head);
int		next_p_pos(t_arr_info *arr, int cnt_p);
void	sort_3(t_arr_info *a, t_output *head);
void	sort_4(t_arr_info *a, t_arr_info *b, t_output *head);
void	sort_5(t_arr_info *a, t_arr_info *b, t_output *head);
void	excute_hardcoding(t_output *head, t_arr_info *a, t_arr_info *b);

void	r(t_output *head, char stack_name, t_arr_info *changing);
void	rr(t_output *head, char stack_name, t_arr_info *changing);
void	s(t_output *head, char stack_name, t_arr_info *changing);
void	p(t_output *head, char stack_name, t_arr_info *a, t_arr_info *b);

void	make_idx(int argc, int *a, int *b);
void	init_arr(int argc, char **argv, t_arr_info *a, t_arr_info *b);
t_bool	is_sorting(int *a, int pos_p_top_a, int size);
int		sort_arr(t_arr_info *a, t_arr_info *b, t_output *cmd_group);
#endif