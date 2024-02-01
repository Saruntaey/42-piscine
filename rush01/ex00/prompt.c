/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:42:16 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 11:06:55 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "prompt.h"
#include "string.h"

int	show_usage(int status)
{
	put_str("Usage: ./rush-01 \"col1up col2up col3up col4up col1down col2down \
col3down col4down row1left row2left row3left row4left row1right row2right \
row3right row4right\"\n");
	return (status);
}

int	fail(int status, char *msg)
{
	put_str(msg);
	return (status);
}

void	put_str(char *str)
{
	write(1, str, str_len(str));
}

void	put_nbr(int n)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		put_nbr(n / 10);
		c = '0' + (n % 10);
		write(1, &c, 1);
	}
}
