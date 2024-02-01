/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_game_board.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 11:07:31 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 11:20:42 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHOW_GAME_BOARD_H
# define SHOW_GAME_BOARD_H
# include "game_def.h"

void	show_game_board(int size, int board[][size], int *visible_views);
void	put_top_view(int size, int *visible_views);
void	put_buttom_view(int size, int *visible_views);

#endif
