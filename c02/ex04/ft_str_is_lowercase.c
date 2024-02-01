/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:13:51 by satapee           #+#    #+#             */
/*   Updated: 2024/01/17 17:52:20 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char *str[] = {
// 		"",
// 		"hello",
// 		"Hello",
// 		"howdy123",
// 	};
// 	int i = 0;
// 
// 	while (i < 4)
// 	{
// 		printf("\n===\n\"%s\"\n%d\n", str[i], ft_str_is_lowercase(str[i]));
// 		i++;
// 	}
// }
