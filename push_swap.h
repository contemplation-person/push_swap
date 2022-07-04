/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:30:29 by juha              #+#    #+#             */
/*   Updated: 2022/07/04 15:37:22 by juha             ###   ########seoul.kr  */
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

typedef enum s_bool
{
	TRUE = -1,
	FALSE = 0
}t_bool;

typedef enum s_edge
{
	BODY = 0,
	FRONT = 70,
	TAIL = 84
}t_edge;

typedef struct s_node
{
	int				data;
	int				idx;
	t_edge			edge;
	char			position;
	struct s_node	*next;
	struct s_node	*pre;
}	t_node;

t_bool			write_error_message(char *message);
t_bool			is_int_max(char *argv);
t_bool			is_duplicate(int argc, char **argv);
t_bool			is_wrong_input(char *argv);
t_bool			check_error(int argc, char **argv);

size_t			change_size_t(const char *str);
size_t			ft_strlen(const char	*s);
long			ft_atoi(const char	*str);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
static char		**make_pp(char *s, char c, size_t cnt);
static void		free_all(char **pp, size_t cnt);
static size_t	cnt_word(char *str, char c);
static char		*make_p(char *s, char c);
char			*ft_substr(char const *s, size_t start, size_t len);
char			*ft_strdup(const char *s1);
char			**ft_split(char const *s, char c, int *argc);

char	**split_num(int *argc, char **argv);
#endif