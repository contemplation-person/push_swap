/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:14:58 by juha              #+#    #+#             */
/*   Updated: 2022/06/30 13:37:08 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_state	write_error_message(char *message);
t_bool	is_int_max(char *argv);
t_bool	is_duplicate(int argc, char **argv);
t_bool	is_wrong_input(char *argv);
void	check_error(int argc, char **argv);

t_bool	is_duplicate(int argc, char **argv)
{
	size_t	argv_len;
	size_t	cmp_len;
	size_t	i;
	size_t	j;

	while (--argc)
	{
		i = 1;
		while (i < argc)
		{
			argv_len = ft_strlen(argv[argc]);
			cmp_len = ft_strlen(argv[i]);
			if (argv_len == cmp_len)
			{
				if (!ft_memcmp(argv[argc], argv[i], cmp_len))
					return (TRUE);
			}
			i++;
		}
	}
	return (FALSE);
}

t_bool	is_int_max(char *argv)
{
	size_t	argv_len;
	size_t	i;
	long	argv_toi;

	if (*argv == '-')
		argv_len = ft_strlen(argv + 1);
	if (10 >= argv_len)
	{
		argv_toi = ft_atoi(argv);
		if (-2147483649 < argv_toi && argv_toi < 2147483648)
			return (TRUE);
	}
	return (FALSE);
}

t_bool	is_wrong_input(char *argv)
{
	if (*argv == '-')
		argv++;
	while (*argv)
	{
		if (!('0' <= *argv && *argv <= '9'))
			return (TRUE);
		argv++;
	}
	return (FALSE);
}

t_state	write_error_message(char *message)
{
	write(2, message, ft_strlen(message));
	return (SUCCESS);
}

void	check_error(int argc, char **argv)
{
	int		i;
	t_state	state;

	if (argc < 2)
		state = write_error_message("errorCode 1-1 : 인자가 없거나 적습니다.");
	else if (is_duplicate(argc, argv))
		state = write_error_message("errorCode 2-1 : 인자가 중복입니다.");
	while (*(++argv))
	{
		if (is_wrong_input(*argv))
			state = write_error_message("errorCode 3-1 : 인자가 숫자가 아닙니다.");
		else if (!is_int_max(*argv))
			state = write_error_message("errorCode 4-1 : 잘못된 인자값입니다.");
		if (state)
			exit(1);
	}
	return ;
}