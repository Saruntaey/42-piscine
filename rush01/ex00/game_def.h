/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_def.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:11:00 by satapee           #+#    #+#             */
/*   Updated: 2024/01/20 17:45:42 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_DEF_H
# define GAME_DEF_H
# define TABLE_SIZE 4
# define BOUNDARY_COUNT 4

typedef enum e_position
{
	TOP,
	BUTTOM,
	LEFT,
	RIGHT,
}	t_position;

typedef struct s_posible_sol
{
	int	row;
	int	col;
	int	num;
}	t_posible_sol;

#endif
