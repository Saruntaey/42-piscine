/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:17:35 by satapee           #+#    #+#             */
/*   Updated: 2024/01/21 18:41:33 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	put_hex(unsigned char num);

void	ft_putstr_non_printable(char *str)
{
	char	*hex;

	hex = "0123456789abcdef";
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			write(1, "\\", 1);
			if ((unsigned char) *str < 16)
				write(1, "0", 1);
			put_hex(*str);
		}
		else
			write(1, str, 1);
		str++;
	}
}

void	put_hex(unsigned char num)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num < 16)
		write(1, hex + num, 1);
	else
	{
		put_hex(num / 16);
		write(1, hex + (num % 16), 1);
	}
}

// int main(void)
// {
// 	char *str[] = {
// 		"Coucou\ntu vas bien ?",
// 		"\1\2\3\4\5\6\7Coucou\ntu vas bien ?\x7f",
// 		"\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a",
// 	};
// 	int i = 0;
// 
// 	while (i < 3)
// 	{
// 		printf("\n===\n\"%s\"\n", str[i]);
// 		ft_putstr_non_printable(str[i]);
// 		printf("\n");
// 		i++;
// 	}
// }
