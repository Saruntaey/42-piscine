/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:32:47 by satapee           #+#    #+#             */
/*   Updated: 2024/01/30 11:40:55 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	left_bound;
	int	right_bound;
	int	res;

	if (nb < 1)
		return (0);
	left_bound = 1;
	right_bound = nb;
	while (left_bound <= right_bound)
	{
		res = (left_bound + right_bound) / 2;
		if ((long int) res * (long int) res == (long int) nb)
			return (res);
		else if ((long int) res * (long int) res > (long int) nb)
			right_bound = res - 1;
		else
			left_bound = res + 1;
	}
	return (0);
}

// #include <stdio.h>
// 
// int	ft_sqrt(int nb);
// 
// int	main(void)
// {
// 	int i;
// 
// 	// 2147395600
// 	i = 2147395600;
// 	while (i <= 2147395600)
// 	{
// 		printf("\n===\n");
// 		printf("sqrt(%d): %d\n", i, ft_sqrt(i));
// 		i++;
// 	}
// }
