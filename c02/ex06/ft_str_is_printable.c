/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:42:30 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 12:28:51 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char *str[] = {
// 		"",
// 		" ",
// 		"hello",
// 		"\x68llo",
// 		"hello\n",
// 		"h\x7e",
// 		"h\x7f",
// 	};
// 	int i = 0;
// 
// 	while (i < 7)
// 	{
// 		printf("\n===\n\"%s\"\n%d\n", str[i], ft_str_is_printable(str[i]));
// 		i++;
// 	}
// }
