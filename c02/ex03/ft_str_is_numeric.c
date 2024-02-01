/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:52:57 by satapee           #+#    #+#             */
/*   Updated: 2024/01/17 16:36:23 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char *str;
// 
// 	str = "";
// 	printf("\n===\n%s\n%d\n", str, ft_str_is_numeric(str));
// 
// 	str = "109834";
// 	printf("\n===\n%s\n%d\n", str, ft_str_is_numeric(str));
// 
// 	str = "109o834";
// 	printf("\n===\n%s\n%d\n", str, ft_str_is_numeric(str));
// }
