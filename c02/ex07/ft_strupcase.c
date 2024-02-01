/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:33:29 by satapee           #+#    #+#             */
/*   Updated: 2024/01/17 17:54:35 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char str[][15] = {
// 		"",
// 		"Hello",
// 		"HI",
// 		"abc1234$*!xyz",
// 		"a",
// 		"z",
// 	};
// 	int i = 0;
// 
// 	while ( i < 6)
// 	{
// 		printf("\n===\n\"%s\"\n", str[i]);
// 		printf("\"%s\"\n", ft_strupcase(str[i]));
// 		i++;
// 	}
// }
