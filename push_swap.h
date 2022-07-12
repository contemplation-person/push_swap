/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:30:29 by juha              #+#    #+#             */
/*   Updated: 2022/07/12 10:34:49 by juha             ###   ########seoul.kr  */
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
	RR = -1,
	P = 0,
	R = 1,
	S = 2,
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

typedef struct s_stack_arr
{
	int	*stack;
	int	p_pos;
	int	size;
}t_stack_arr;

typedef struct t_output
{
	t_cmd			cmd;
	t_pos			pos;
	struct t_output	*next_node;
}	t_output;

void	init_arr(int argc, char **argv, t_stack_arr *a, t_stack_arr *b);
t_bool	is_sorting(int *a, int pos_p_top_a, int size);
void	sort_arr(t_stack_arr *a, t_stack_arr *b, t_output *cmd_group);

size_t	change_size_t(const char *str);
size_t	ft_strlen(const char	*s);
long	ft_atoi(const char	*str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *s, size_t n);

void	del_one_way_node(t_output *head);
void	new_one_way_node(t_output *head, t_cmd	cmd, t_pos pos);

t_bool	write_error_message(char *message);
t_bool	is_int_max(char *argv);
t_bool	is_duplicate(int argc, char **argv);
t_bool	is_wrong_input(char *argv);
t_bool	check_error(int argc, char **argv);

//void	r_sort_3(t_stack_arr *b, t_output *head);
int		next_p_pos(t_stack_arr *arr, int cnt_p);
void	sort_3(t_stack_arr *a, t_output *head);
void	sort_4(t_stack_arr *a, t_stack_arr *b, t_output *head);
void	sort_5(t_stack_arr *a, t_stack_arr *b, t_output *head);
void	excute_hardcoding(t_output *head, t_stack_arr *a, t_stack_arr *b);

void	r(t_output *head, char stack_name, t_stack_arr *changing);
void	rr(t_output *head, char stack_name, t_stack_arr *changing);
void	s(t_output *head, char stack_name, t_stack_arr *changing);
void	p(t_output *head, char stack_name, t_stack_arr *a, t_stack_arr *b);

void	make_idx(int argc, int *a, int *b);
void	init_arr(int argc, char **argv, t_stack_arr *a, t_stack_arr *b);
t_bool	is_sorting(int *a, int pos_p_top_a, int size);
void	sort_arr(t_stack_arr *a, t_stack_arr *b, t_output *cmd_group);
#endif