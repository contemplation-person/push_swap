/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_pre_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:43:18 by juha              #+#    #+#             */
/*   Updated: 2022/07/04 09:59:40 by juha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

char	*ft_strdup(const char *s1)
{
	char	*temp;
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	temp = (char *)malloc(i + 1);
	if (!temp)
		return (0);
	i = 0;
	while (s1[i])
	{
		temp[i] = s1[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*temp;
	size_t	k;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	k = 0;
	while (s[start + k])
		k++;
	if (len > k)
		len = k;
	temp = (char *)malloc(len + 1);
	if (!temp)
		return (0);
	i = start;
	j = 0;
	while (j < len)
		temp[j++] = (char)s[i++];
	temp[j] = '\0';
	return (temp);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_temp1;
	unsigned char	*s_temp2;
	size_t			i;

	s_temp1 = (unsigned char *)s1;
	s_temp2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s_temp1[i] != s_temp2[i])
			return (s_temp1[i] - s_temp2[i]);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char	*s)
{
	size_t	cnt;

	cnt = 0;
	while (s[cnt])
		cnt++;
	return (cnt);
}

size_t	change_size_t(const char *str)
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

long	ft_atoi(const char *str)
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
	return (cnt * is_minus);
}

char	**ft_split(char const *s, char c, int *argc)
{
	char	**pp;
	char	*str;

	str = (char *)s;
	while (*str && *str == c)
		str++;
	pp = make_pp(str, c, cnt_word(str, c));
	argc += cnt_word(str, c);
	return (pp);
}

static size_t	cnt_word(char *str, char c)
{
	char	*s;
	size_t	cnt;

	s = str;
	cnt = 0;
	while (*str && *str == c)
		str++;
	while (*s)
	{
		cnt++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (cnt);
}

static char	*make_p(char *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (s[cnt] && s[cnt] != c)
		cnt++;
	return (ft_substr(s, 0, cnt));
}

static void	free_all(char **pp, size_t cnt)
{
	size_t	i;

	i = 0;
	while (i < cnt)
	{
		free(pp[i]);
		pp[i++] = 0;
	}
	free(pp);
}

static char	**make_pp(char *s, char c, size_t cnt)
{
	size_t	i;
	char	**pp;

	pp = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!pp)
		return (0);
	i = 0;
	while (i < cnt)
	{
		pp[i] = make_p(s, c);
		if (pp[i] == 0)
		{
			free_all(pp, i);
			pp = 0;
			return (0);
		}
		i++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	pp[i] = 0;
	return (pp);
}
