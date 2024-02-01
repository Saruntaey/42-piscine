/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_view.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:53:47 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 11:03:09 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_view.h"

int	check_dup(int board[][TABLE_SIZE], t_posible_sol p)
{
	int	i;

	i = 0;
	while (i < p.row)
	{
		if (board[i][p.col] == p.num)
			return (1);
		i++;
	}
	i = 0;
	while (i < p.col)
	{
		if (board[p.row][i] == p.num)
			return (1);
		i++;
	}
	return (0);
}

int	check_view(int board[][TABLE_SIZE], int *views, t_posible_sol p)
{
	int	view_ok;
	int	tmp;

	view_ok = 1;
	tmp = board[p.row][p.col];
	board[p.row][p.col] = p.num;
	if (p.col == TABLE_SIZE - 1 && view_ok)
	{
		view_ok = check_row_view(board, views, p);
	}
	if (p.row == TABLE_SIZE - 1 && view_ok)
	{
		view_ok = check_col_view(board, views, p);
	}
	board[p.row][p.col] = tmp;
	return (view_ok);
}

int	check_row_view(int board[][TABLE_SIZE], int *views, t_posible_sol p)
{
	if (get_view(views, p.row, LEFT) != count_view(board, p.row, LEFT))
		return (0);
	if (get_view(views, p.row, RIGHT) != count_view(board, p.row, RIGHT))
		return (0);
	return (1);
}

int	check_col_view(int board[][TABLE_SIZE], int *views, t_posible_sol p)
{
	if (get_view(views, p.col, TOP) != count_view(board, p.col, TOP))
		return (0);
	if (get_view(views, p.col, BUTTOM) != count_view(board, p.col, BUTTOM))
		return (0);
	return (1);
}

int	get_view(int *views, int idx, t_position pos)
{
	if (pos == BUTTOM)
		views += TABLE_SIZE;
	else if (pos == LEFT)
		views += 2 * TABLE_SIZE;
	else if (pos == RIGHT)
		views += 3 * TABLE_SIZE;
	return (views[idx]);
}
