/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:04:14 by satapee           #+#    #+#             */
/*   Updated: 2024/01/29 12:01:02 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// 
// int	ft_is_prime(int nb);
// 
// int	main(void)
// {
// 	int	i;
// 
// 	i = 0;
// 	while (i < 1000)
// 	{
// 		if (ft_is_prime(i))
// 			printf("%d, ", i);
// 		i++;
// 	}
// 	printf("\n");
// }
