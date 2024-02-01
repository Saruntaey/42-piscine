/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:17:04 by satapee           #+#    #+#             */
/*   Updated: 2024/01/25 15:24:02 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_dup(char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	int	radix;

	radix = 0;
	while (base[radix])
	{
		if (base[radix] == '+' || base[radix] == '-')
			return ;
		radix++;
	}
	if (radix < 2 || is_dup(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr < ((radix * -1) + 1))
			ft_putnbr_base((nbr / radix) * -1, base);
		ft_putnbr_base((nbr % radix) * -1, base);
	}
	else if (nbr < radix)
		write(1, &base[nbr], 1);
	else
	{
		ft_putnbr_base(nbr / radix, base);
		ft_putnbr_base(nbr % radix, base);
	}
}

int	is_dup(char *str)
{
	int	i;

	while (*str)
	{
		i = 1;
		while (str[i])
		{
			if (str[0] == str[i])
				return (1);
			i++;
		}
		str++;
	}
	return (0);
}

// #include <stdio.h>
// 
// #define BASE_N 10
// #define NUM_N 4
// 
// void	ft_putnbr_base(int nbr, char *base);
// int		is_dup(char *str);
// 
// // int	main(void)
// // {
// // 	char *str[] = {
// // 		"",
// // 		"1234",
// // 		"12342",
// // 	};
// // 	int i = 0;
// // 
// // 	while (i < 3)
// // 	{
// // 		printf("\n===\n\"%s\"\n%d\n", str[i], is_dup(str[i]));
// // 		i++;
// // 	}
// // }
// 
// int	main(void)
// {
// 	char *bases[] = {
// 		"0123456789",
// 		"01",
// 		"0123456789abcdef",
// 		"poneyvif",
// 		"",
// 		"0",
// 		"pon+eyvi",
// 		"pon-eyvi",
// 		"not_dup",
// 		"dupplicateeeee",
// 	};
// 	int nums[] = {
// 		10,
// 		-10,
// 		42,
// 		-42,
// 	};
// 	int i;
// 	int j;
// 
// 	i = 0;
// 	while (i < NUM_N)
// 	{
// 		printf("\n");
// 		printf("\n==========================================================");
// 		printf("\nnum: %d", nums[i]);
// 		printf("\n==========================================================");
// 		printf("\nnum: %d", nums[i]);
// 		j = 0;
// 		while (j < BASE_N)
// 		{
// 			printf("\nbase: \"%s\"\n", bases[j]);
// 			ft_putnbr_base(nums[i], bases[j]);
// 			j++;
// 		}
// 		i++;
// 	}
// }
