/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_hardcoding_utils.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:03:54 by juha              #+#    #+#             */
/*   Updated: 2022/07/09 11:03:54 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(int *a)
{
	if (*a == 1)
		write(1, "sa\nra\n", 6);
	else if (*a == 2 && a[1] == 1)
		write(1, "sa\n", 3);
	else if (*a == 2)
		write(1, "rra\n", 4);
	else if (*a == 3 && a[1] == 1)
		write(1, "ra\n", 3);
	else
		write(1, "ra\nra\n", 6);
	exit(0);
}

void	sort_4(int *a, int *b)
{
	if (a[0] == 4)
	{
		write(1, "pb\n", 3);
		sort_3(a + 1);
		// pb 1번 후 sort_3 and pa
	}
	else if (a[1] == 4)
	{
		//sa 1번 후 pb sort_3 and pa
	}
	else if (a[2] == 4)
	{
		// ra, sa pb sort_3 pa
	}
		//rra pb sort_3 and pa
}

void	sort_5(int *a, int *b)
{
	int	cnt_b;

	cnt_b  = 0;
	while (cnt_b > 1)
	{
		if (cnt_b == 0)
		{
			if (a[0] > 3)
				//pa 실행
			if (a[1] > 3)
			if (a[2] > 3)
			if (a[3] > 3)
			if (a[4] > 3)
		}
		else
		{
			if (a[0] > 3)
				//pa 실행
			if (a[1] > 3)
			if (a[2] > 3)
			if (a[3] > 3)
		}
	}
	if (!is_sorting(b))
		//a에 ra가 있는지 체크후 솔팅.
	sort_3(a);
	//pb == 2개 정렬

}

void excute_hardcoding(int *a, int *b, int size_a)
{
	int	top_a;

	top_a = 0;
	if (size_a == 2)
		write(1, "sa\n", 3);
	else if (size_a == 3)
		sort_3(a);
	else if (size_a == 4)
		sort_4(a, b);	
	else if (size_a == 4)
		sort_5(a, b);

}
