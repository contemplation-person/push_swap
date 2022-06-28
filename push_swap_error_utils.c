/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:14:58 by juha              #+#    #+#             */
/*   Updated: 2022/06/28 16:04:48 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_state	write_error_message(char *message)
{
	write(2, message, ft_strlen(message));
	return (SUCCESS);
}

t_state	over_int_max(char c, int idx)
{
	"2147483647"
	return (SUCCESS);
}

/*중복수 안됨*/
void	check_error(int argc, char **argv)
{
	int		i;
	t_state	state;

	if (argc < 2)
		state = write_error_message("인자가 없거나 적습니다.");
	else if (!(*argv == '-') && !ft_digit(*argv))
		state = write_error_message("잘못된 인자를 넣었습니다.");
	else if (*argv == '-')
	{
		i = 0;
		while ((*argv)[++i])
		{
			if (ft_digit((*argv)[i]))
			{
				state = write_error_message("숫자가 아닙니다.");
				break ;
			}
			if (over_int_max())
		}
	}

	if (argc < 2 && error_argv(argc, argv))
	if (state)
		exit(1);
	return;
}
