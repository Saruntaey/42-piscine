/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:08:12 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 11:45:05 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H
# include "game_def.h"

int		parse_input(int *res, char *str, int size);
int		ensure_all_elem_in_range(int *arr, int size, int min, int max);
void	set_board(int board[][TABLE_SIZE], int num);

#endif
