/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:56:04 by satapee           #+#    #+#             */
/*   Updated: 2024/01/23 12:28:20 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c);
int	is_num_char(char c);

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*str && is_space(*str))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && is_num_char(*str))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (sign * num);
}

int	is_space(char c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}

int	is_num_char(char c)
{
	return ('0' <= c && c <= '9');
}

// #include <stdio.h>
// 
// int	ft_atoi(char *str);
// 
// int	main(void)
// {
// 	char *str[] = {
// 		"0",
// 		"123",
// 		"-123",
// 		"+++123",
// 		"---123",
// 		"---+--+123",
// 		"+++-++-123",
// 		"        +++-++-123",
// 		"        \t\n\v\f\r   +++-++-123",
// 		"        +++-++-            123",
// 		"+++-++-12asdf3",
// 		"2147483647",
// 		"-2147483648",
// 		"2147483648",
// 		"-2147483649",
// 	};
// 	int	i = 0;
// 
// 	while (i < 14)
// 	{
// 		printf("\n===\n");
// 		printf("\"%s\"\n", str[i]);
// 		printf("%d\n", ft_atoi(str[i]));
// 		i++;
// 	}
// }
