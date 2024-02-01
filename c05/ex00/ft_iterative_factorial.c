/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:07:03 by satapee           #+#    #+#             */
/*   Updated: 2024/01/29 11:40:04 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	res = nb;
	while (nb > 2)
	{
		nb--;
		res *= nb;
	}
	return (res);
}

// #include <stdio.h>
// 
// int	ft_iterative_factorial(int	nb);
// 
// int	main(void)
// {
// 	int num[] = {
// 		5,
// 		3,
// 		2,
// 		1,
// 		0,
// 		-1,
// 	};
// 	int i = 0;
// 
// 	while (i < 6)
// 	{
// 		printf("\n===\n");
// 		printf("factorial (%d): %d\n", num[i], ft_iterative_factorial(num[i]));
// 		i++;
// 	}
// }
