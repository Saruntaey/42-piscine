/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:26:53 by satapee           #+#    #+#             */
/*   Updated: 2024/01/29 11:43:39 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	res = nb;
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}

// #include <stdio.h>
// #define NUM_N 5
// #define POW_N 5
// 
// int	ft_iterative_power(int nb, int power);
// 
// int	main(void)
// {
// 	int	num[] = {
// 		3,
// 		2,
// 		1,
// 		0,
// 		-1,
// 	};
// 	int pow[] = {
// 		3,
// 		2,
// 		1,
// 		0,
// 		-1,
// 	};
// 	int i;
// 	int j;
// 
// 	i = 0;
// 	while (i < NUM_N)
// 	{
// 		j = 0;
// 		printf("\n===\n");
// 		while (j < POW_N)
// 		{
// 			printf("%d pow %d: %d\n",
// 				   	num[i],
// 				   	pow[j],
// 				   	ft_iterative_power(num[i],
// 					pow[j]));
// 			j++;
// 		}
// 		i++;
// 	}
// }
