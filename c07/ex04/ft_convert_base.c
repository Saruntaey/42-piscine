/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:03:56 by satapee           #+#    #+#             */
/*   Updated: 2024/02/01 13:37:12 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_convert_base(char *nbr, char *base_from, char *base_to);
int				ft_atoi_base(char *str, char *base, int *num);
int				ft_number_base(int num, char *base, char **res);
int				count_digit(int num, int radix);
int				get_radix(char *base);
int				is_dup(char *str);
int				is_space(char c);
int				is_numchar(char c);
unsigned int	to_positive(int num);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*res;

	if (ft_atoi_base(nbr, base_from, &num) != 0)
		return (NULL);
	if (ft_number_base(num, base_to, &res) != 0)
		return (NULL);
	return (res);
}

int	ft_atoi_base(char *str, char *base, int *res)
{
	int	num;
	int	sign;
	int	radix;

	radix = get_radix(base);
	if (radix < 2 || is_dup(base))
		return (-1);
	while (*str && is_space(*str))
		str++;
	sign = 1;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	num = 0;
	while (*str && is_numchar(*str))
	{
		num = num * radix + (*str - '0');
		str++;
	}
	*res = sign * num;
	return (0);
}

int	ft_number_base(int num, char *base, char **res)
{
	unsigned int	p_num;
	int				radix;
	int				digit;

	radix = get_radix(base);
	if (radix < 2 || is_dup(base))
		return (-1);
	digit = count_digit(num, radix);
	p_num = to_positive(num);
	if (num < 0)
		digit++;
	*res = malloc(sizeof(**res) * (digit + 1));
	if (!*res)
		return (-1);
	(*res)[digit] = '\0';
	while (digit > 0 && p_num > 0)
	{
		digit--;
		(*res)[digit] = base[p_num % radix];
		p_num /= radix;
	}
	if (num < 0)
		(*res)[0] = '-';
	return (0);
}

unsigned int	to_positive(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

int	count_digit(int num, int radix)
{
	unsigned int	p_num;
	int				count;

	count = 0;
	if (num < 0)
		p_num = -num;
	else
		p_num = num;
	while (p_num > 0)
	{
		p_num /= radix;
		count++;
	}
	return (count);
}
