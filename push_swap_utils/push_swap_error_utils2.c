/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error_utils2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:23:32 by juha              #+#    #+#             */
/*   Updated: 2022/07/04 16:16:50 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


#include <stdio.h>


char	**split_num(int *argc, char **argv)
{
	ft_split(*(argv + 1), ' ', argc);
	return (argv);
}

// char	**split_num(int *argc, char **argv)
// {
// 	char	**split_temp;
// 	char	**temp;
// 	int		use_split;

// 	use_split = 0;
// 	while (++(argv))
// 	{
// 		while (**argv)
// 		{
// 			if (**argv == ' ')
// 				use_split = 1;
// 			if (use_split)
// 				break ;
// 			(**argv)++;
// 		}
// 		if (use_split)
// 		{
// 			split_temp = ft_split(*argv, ' ', argc);
// 			if (!split_temp)
// 				exit(1);
// 			temp = argv + 1;
// 			argv = split_temp;
// 			while (++(argv))
// 				;
// 			argv = temp;
// 		}
// 	}
// 	return (argv);
// }
