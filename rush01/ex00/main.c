/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:36:54 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 11:10:05 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "game_def.h"
#include "prompt.h"
#include "string.h"
#include "parser.h"
#include "solver.h"
#include "show_game_board.h"

int	main(int argc, char **argv)
{
	int	input[BOUNDARY_COUNT * TABLE_SIZE];
	int	input_size;
	int	game_board[TABLE_SIZE][TABLE_SIZE];

	if (argc != 2)
		return (show_usage(1));
	if (str_cmp(argv[1], "--help") == 0)
		return (show_usage(0));
	input_size = parse_input(input, argv[1], BOUNDARY_COUNT * TABLE_SIZE);
	if (input_size != BOUNDARY_COUNT * TABLE_SIZE)
		return (fail(1, "Input must contain 16 numbers\n"));
	if (!ensure_all_elem_in_range(input, input_size, 1, 4))
		return (fail(1, "Each input element must between 1 and 4\n"));
	set_board(game_board, 0);
	if (solve(game_board, input))
		show_game_board(TABLE_SIZE, game_board, input);
	else
	{
		return (fail(1, "Cannot solve\n"));
	}
}
