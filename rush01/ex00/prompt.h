/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:49:21 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 11:07:12 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROMPT_H
# define PROMPT_H

int		show_usage(int status);
int		fail(int status, char *msg);
void	put_str(char *str);
void	put_nbr(int n);

#endif
