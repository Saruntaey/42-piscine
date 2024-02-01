/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:55:36 by satapee           #+#    #+#             */
/*   Updated: 2024/01/29 12:15:09 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *str);

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		put_str(argv[i]);
		put_str("\n");
		i++;
	}
}

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}
