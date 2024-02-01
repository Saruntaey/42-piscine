/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_view.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:59:55 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 10:59:56 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COUNT_VIEW_H
# define COUNT_VIEW_H
# include "game_def.h"

int	count_view(int board[][TABLE_SIZE], int idx, t_position pos);
int	count_row_view_from_left(int board[][TABLE_SIZE], int idx);
int	count_row_view_from_right(int board[][TABLE_SIZE], int idx);
int	count_col_view_from_top(int board[][TABLE_SIZE], int idx);
int	count_col_view_from_buttom(int board[][TABLE_SIZE], int idx);

#endif
