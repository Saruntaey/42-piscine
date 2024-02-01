/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:16:02 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 10:59:16 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H
# include "game_def.h"
# include "check_view.h"

int	solve(int board[][TABLE_SIZE], int *views);
int	can_put(int board[][TABLE_SIZE], int *views, t_posible_sol p);
int	find_empty_cell(int board[][TABLE_SIZE], int *row, int *col);

#endif
