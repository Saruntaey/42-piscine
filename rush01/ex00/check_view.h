/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_view.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:54:43 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 11:22:22 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_VIEW_H
# define CHECK_VIEW_H
# include "game_def.h"
# include "count_view.h"

int	check_dup(int board[][TABLE_SIZE], t_posible_sol p);
int	check_view(int board[][TABLE_SIZE], int *views, t_posible_sol p);
int	check_row_view(int board[][TABLE_SIZE], int *views, t_posible_sol p);
int	check_col_view(int board[][TABLE_SIZE], int *views, t_posible_sol p);
int	get_view(int *views, int idx, t_position pos);

#endif
