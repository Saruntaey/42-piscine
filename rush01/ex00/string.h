/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:56:57 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 11:45:16 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

int	str_len(char *str);
int	str_cmp(char *s1, char *s2);
int	parse_int(char *str, int *res);
int	is_space_char(char c);
int	is_num_char(char c);

#endif
