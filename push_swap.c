/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:20:14 by juha              #+#    #+#             */
/*   Updated: 2022/06/27 11:33:08 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdlib.h"

int	*number_index(int argc, char **argv);
/*
	atoi;
	printf("%d", argc);
	printf("%s", *(argv + 4));
*/
#include <stdio.h>

int	main(int argc, char **argv)
{
	number_index(argc, argv);

	return (0);
}


/*
	배열의 갯수는 argc -2
	argv의 마지막 값은 null이다!
*/
int	*number_index(int argc, char **argv)
{
	int	*arr;

	arr = malloc(argc - 2 * 4);
	while (*argv++)
		*arr++ = atoi(*argv);

	int	i = 49;
	while (i--)
		printf("%d", *arr++);
	return 0;
}
