/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_view.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:48:57 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 10:49:43 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count_view.h"

int	count_view(int board[][TABLE_SIZE], int idx, t_position pos)
{
	if (pos == LEFT)
		return (count_row_view_from_left(board, idx));
	else if (pos == RIGHT)
		return (count_row_view_from_right(board, idx));
	else if (pos == TOP)
		return (count_col_view_from_top(board, idx));
	else if (pos == BUTTOM)
		return (count_col_view_from_buttom(board, idx));
	else
		return (-1);
}

int	count_row_view_from_left(int board[][TABLE_SIZE], int idx)
{
	int	count;
	int	max;
	int	i;

	count = 0;
	max = 0;
	i = 0;
	while (i < TABLE_SIZE)
	{
		if (board[idx][i] > max)
		{
			max = board[idx][i];
			count++;
		}
		i++;
	}
	return (count);
}

int	count_row_view_from_right(int board[][TABLE_SIZE], int idx)
{
	int	count;
	int	max;
	int	i;

	count = 0;
	max = 0;
	i = TABLE_SIZE - 1;
	while (i >= 0)
	{
		if (board[idx][i] > max)
		{
			max = board[idx][i];
			count++;
		}
		i--;
	}
	return (count);
}

int	count_col_view_from_top(int board[][TABLE_SIZE], int idx)
{
	int	count;
	int	max;
	int	i;

	count = 0;
	max = 0;
	i = 0;
	while (i < TABLE_SIZE)
	{
		if (board[i][idx] > max)
		{
			max = board[i][idx];
			count++;
		}
		i++;
	}
	return (count);
}

int	count_col_view_from_buttom(int board[][TABLE_SIZE], int idx)
{
	int	count;
	int	max;
	int	i;

	count = 0;
	max = 0;
	i = TABLE_SIZE - 1;
	while (i >= 0)
	{
		if (board[i][idx] > max)
		{
			max = board[i][idx];
			count++;
		}
		i--;
	}
	return (count);
}
