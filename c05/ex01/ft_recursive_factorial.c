/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:20:47 by satapee           #+#    #+#             */
/*   Updated: 2024/01/29 11:40:33 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb <= 2)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// 
// int	ft_recursive_factorial(int nb);
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
// 		printf("factorial (%d): %d\n", num[i], ft_recursive_factorial(num[i]));
// 		i++;
// 	}
// }
