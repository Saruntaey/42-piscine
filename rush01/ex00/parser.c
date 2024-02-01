/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:07:17 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 11:44:54 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "game_def.h"
#include "string.h"

int	parse_input(int *res, char *str, int size)
{
	int	i;

	i = 0;
	while (*str && i < size)
	{
		if (is_num_char(*str))
		{
			str += parse_int(str, &res[i]);
			i++;
		}
		else if (is_space_char(*str))
			str++;
		else
			return (-1);
	}
	while (*str && *str == ' ')
		str++;
	if (i == size && *str)
		return (-1);
	return (i);
}

int	ensure_all_elem_in_range(int *arr, int size, int min, int max)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] < min || arr[i] > max)
			return (0);
		i++;
	}
	return (1);
}

void	set_board(int board[][TABLE_SIZE], int num)
{
	int	row;
	int	col;

	row = 0;
	while (row < TABLE_SIZE)
	{
		col = 0;
		while (col < TABLE_SIZE)
		{
			board[row][col] = num;
			col++;
		}
		row++;
	}
}
