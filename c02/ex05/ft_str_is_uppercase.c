/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:36:23 by satapee           #+#    #+#             */
/*   Updated: 2024/01/17 17:53:10 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char *str[] = {
// 		"",
// 		"HELLO",
// 		"Hello",
// 	};
// 	int	i = 0;
// 
// 	while (i < 3)
// 	{
// 		printf("\n===\n\"%s\"\n%d\n", str[i], ft_str_is_uppercase(str[i]));
// 		i++;
// 	}
// }
