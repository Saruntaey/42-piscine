/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:56:08 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 11:44:49 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	str_cmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

int	parse_int(char *str, int *res)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] && is_num_char(str[i]))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	*res = num;
	return (i);
}

int	is_num_char(char c)
{
	return ('0' <= c && c <= '9');
}

int	is_space_char(char c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}
