/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:14:49 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 11:03:49 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver.h"

int	solve(int board[][TABLE_SIZE], int *views)
{
	t_posible_sol	p;

	if (!find_empty_cell(board, &p.row, &p.col))
		return (1);
	p.num = 1;
	while (p.num <= 4)
	{
		if (can_put(board, views, p))
		{
			board[p.row][p.col] = p.num;
			if (solve(board, views))
				return (1);
			board[p.row][p.col] = 0;
		}
		p.num++;
	}
	return (0);
}

int	find_empty_cell(int board[][TABLE_SIZE], int *row, int *col)
{
	int	i;
	int	j;

	i = 0;
	while (i < TABLE_SIZE)
	{
		j = 0;
		while (j < TABLE_SIZE)
		{
			if (board[i][j] == 0)
			{
				*row = i;
				*col = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	can_put(int board[][TABLE_SIZE], int *views, t_posible_sol p)
{
	int	dup;
	int	view_ok;

	dup = check_dup(board, p);
	if (dup)
		return (0);
	if ((p.col == TABLE_SIZE - 1) || (p.row == TABLE_SIZE - 1))
	{
		view_ok = check_view(board, views, p);
		if (!view_ok)
			return (0);
	}
	return (1);
}
