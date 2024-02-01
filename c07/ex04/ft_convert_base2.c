/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:36:12 by satapee           #+#    #+#             */
/*   Updated: 2024/02/01 13:36:51 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_convert_base(char *nbr, char *base_from, char *base_to);
int				ft_atoi_base(char *str, char *base, int *num);
int				ft_number_base(int num, char *base, char **res);
int				count_digit(int num, int radix);
int				get_radix(char *base);
int				is_dup(char *str);
int				is_space(char c);
int				is_numchar(char c);
unsigned int	to_positive(int num);

int	get_radix(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || is_space(base[i]))
			return (-1);
		i++;
	}
	return (i);
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

int	is_space(char c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}

int	is_numchar(char c)
{
	return ('0' <= c && c <= '9');
}
