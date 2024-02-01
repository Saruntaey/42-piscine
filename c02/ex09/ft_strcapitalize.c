/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:20:28 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 12:52:54 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	to_upper(char c);
char	to_lower(char c);
int		is_alpha(char c);
int		is_numeric(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_first_char;

	i = 0;
	is_first_char = 1;
	while (str[i])
	{
		if (!is_first_char && !is_alpha(str[i]) && !is_numeric(str[i]))
			is_first_char = 1;
		else if (is_first_char && (is_alpha(str[i]) || is_numeric(str[i])))
		{
			str[i] = to_upper(str[i]);
			is_first_char = 0;
		}
		else
			str[i] = to_lower(str[i]);
		i++;
	}
	return (str);
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	is_alpha(char c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

int	is_numeric(char c)
{
	return ('0' <= c && c <= '9');
}

// int	main(void)
// {
// 	char str[][62] = {
// 		"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un",
// 		"HELLO, there; 123HOWAREYOU",
// 	};
// 	int i = 0;
// 
// 	while (i < 2)
// 	{
// 		printf("\n===\n\"%s\"\n", str[i]);
// 		printf("\"%s\"\n", ft_strcapitalize(str[i]));
// 		i++;
// 	}
// }
