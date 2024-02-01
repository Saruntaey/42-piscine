/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:46:39 by satapee           #+#    #+#             */
/*   Updated: 2024/01/17 17:55:34 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char str[][6] = {
// 		"",
// 		"Hello",
// 		"HI",
// 		"howdy",
// 		"A",
// 		"Z",
// 	};
// 	int i = 0;
// 
// 	while (i < 6)
// 	{
// 		printf("\n===\n\"%s\"\n", str[i]);
// 		printf("\"%s\"\n", ft_strlowcase(str[i]));
// 		i++;
// 	}
// }
