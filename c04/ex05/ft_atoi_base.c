/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:49:46 by satapee           #+#    #+#             */
/*   Updated: 2024/01/25 17:11:53 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_dup(char *str);
int	is_space_char(char c);
int	index_of(char *str, char c);
int	get_radix(char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	radix;
	int	sign;
	int	num;
	int	idx;

	radix = get_radix(base);
	if (radix < 2 || is_dup(base))
		return (0);
	while (*str && is_space_char(*str))
		str++;
	sign = 1;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	num = 0;
	idx = index_of(base, *str);
	while (*str++ && idx != -1)
	{
		num = num * radix + idx;
		idx = index_of(base, *str);
	}
	return (sign * num);
}

int	get_radix(char *base)
{
	int	radix;

	radix = 0;
	while (base[radix])
	{
		if (base[radix] == '+'
			|| base[radix] == '-'
			|| is_space_char(base[radix]))
			return (-1);
		radix++;
	}
	return (radix);
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

int	is_space_char(char c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}

int	index_of(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

// #include <stdio.h>
// 
// #define BASE_N 11
// #define NUM_N 5
// 
// int	ft_atoi_base(char *str, char *base);
// int	index_of(char *str, char c);
// 
// // int main(void)
// // {
// // 	char *str = "abc";
// // 	char c[] = {
// // 		'a',
// // 		'b',
// // 		'c',
// // 		'd',
// // 	};
// // 	int	i = 0;
// // 
// // 	printf("\"%s\"\n", str);
// // 	while (i < 4)
// // 	{
// // 		printf("finding %c: %d\n", c[i], index_of(str, c[i]));
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
// 		"01234567",
// 		"",
// 		"0",
// 		"pon+eyvi",
// 		"pon-eyvi",
// 		"not_dup",
// 		"dupplicateeeee",
// 		"with space",
// 	};
// 	char *nums[] = {
// 		"1010",
// 		"-1010",
// 		"   ++--++1010",
// 		"-++--1010",
// 		"-++--t",
// 	};
// 	int i;
// 	int j;
// 
// 	i = 0;
// 	while (i < NUM_N)
// 	{
// 		printf("\n");
// 		printf("\n========================================================");
// 		printf("\nnum str: \"%s\"", nums[i]);
// 		printf("\n========================================================");
// 		j = 0;
// 		while (j < BASE_N)
// 		{
// 			printf("\nbase: \"%s\"\n", bases[j]);
// 			printf("%d\n", ft_atoi_base(nums[i], bases[j]));
// 			j++;
// 		}
// 		i++;
// 	}
// }
