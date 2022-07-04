/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error_utils2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:23:32 by juha              #+#    #+#             */
/*   Updated: 2022/07/04 20:50:23 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


#include <stdio.h>


void	split_num(int *argc, char ***argv)
{
	int		cut_word;
	int		i;
	char	**next_string;

	cut_word = 0;
	while (++*argv)
	{
		i = 0;
		while (**argv + i)
		{
			if (**argv[i] == ' ')
				cut_word = 1;
			if (cut_word)
				break ;
			i++;
		}
		next_string = *(argv + 1);
		if (cut_word)
			*argv = ft_split(**argv, ' ', argc);
		while (++(**argv))
			;
		*argv = next_string;
	}
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
