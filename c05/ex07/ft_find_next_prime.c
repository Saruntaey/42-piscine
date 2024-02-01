/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:28:26 by satapee           #+#    #+#             */
/*   Updated: 2024/01/29 12:07:15 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		nb = 2;
	else if (nb > 2 && nb % 2 == 0)
		nb++;
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}

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
// int	ft_find_next_prime(int nb);
// 
// int	main(void)
// {
// 	int	num;
// 
// 	num = -2147483648;
// 	while (num < 1000)
// 	{
// 		num = ft_find_next_prime(num);
// 		printf("%d, ", num);
// 		num++;
// 	}
// 
// 	printf("\n");
// 	printf("%d\n", ft_find_next_prime(522));
// 	printf("%d\n", ft_find_next_prime(523));
// }
