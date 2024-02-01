/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_game_board.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 11:06:47 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 11:21:02 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prompt.h"
#include "show_game_board.h"

void	show_game_board(int size, int board[][size], int *visible_views)
{
	int	i;
	int	j;

	put_top_view(size, visible_views);
	i = 0;
	while (i < size)
	{
		put_nbr(visible_views[8 + i]);
		put_str(" | ");
		put_nbr(board[i][0]);
		j = 1;
		while (j < size)
		{
			put_str(" ");
			put_nbr(board[i][j]);
			j++;
		}
		put_str(" | ");
		put_nbr(visible_views[12 + i]);
		put_str("\n");
		i++;
	}
	put_buttom_view(size, visible_views);
}

void	put_top_view(int size, int *visible_views)
{
	int	i;

	put_str("  | ");
	put_nbr(visible_views[0]);
	i = 1;
	while (i < size)
	{
		put_str(" ");
		put_nbr(visible_views[i]);
		i++;
	}
	put_str(" | \n---------------\n");
}

void	put_buttom_view(int size, int *visible_views)
{
	int	i;

	put_str("---------------\n  | ");
	put_nbr(visible_views[4]);
	i = 1;
	while (i < size)
	{
		put_str(" ");
		put_nbr(visible_views[i + 4]);
		i++;
	}
	put_str(" |\n");
}
