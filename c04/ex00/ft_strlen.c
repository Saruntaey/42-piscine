/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:53:50 by satapee           #+#    #+#             */
/*   Updated: 2024/01/23 12:26:59 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>
// 
// int	ft_strlen(char *str);
// 
// int	main(void)
// {
// 	char *str[] = {
// 		"",
// 		"hello",
// 	};
// 	int i = 0;
// 
// 	while (i < 2)
// 	{
// 		printf("\n===\n");
// 		printf("\"%s\"\n", str[i]);
// 		printf("len: %d\n", ft_strlen(str[i]));
// 		i++;
// 	}
// }
