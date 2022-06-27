/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_pre_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:43:18 by juha              #+#    #+#             */
/*   Updated: 2022/06/27 11:38:25 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	change_size_t(const char *str);

static size_t	change_size_t(const char *str)
{
	size_t	cnt;

	cnt = 0;
	while (*str && '0' <= *str && *str <= '9')
	{
		cnt = cnt * 10;
		cnt = cnt + ((*str) - '0');
		str++;
	}
	return (cnt);
}

int	ft_atoi(const char *str)
{
	size_t	cnt;
	int		is_minus;

	is_minus = 1;
	while (*str == 32 || (9 <= *str && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_minus = -1;
		str++;
	}
	cnt = change_size_t(str);
	if (is_minus == -1)
	{
		if (cnt >= 9223372036854775808U)
			return (0);
	}
	else
	{
		if (cnt >= 9223372036854775807)
			return (-1);
	}
	return ((int)cnt * is_minus);
}

