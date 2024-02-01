/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:39:12 by satapee           #+#    #+#             */
/*   Updated: 2024/01/17 15:12:46 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char *str;
// 
// 	str = "";
// 	printf("\n===\n%s\n%d\n", str, ft_str_is_alpha(str));
// 
// 	str = "AakdirbbZZi";
// 	printf("\n===\n%s\n%d\n", str, ft_str_is_alpha(str));
// 
// 	str = "Aak2dirbbZZi";
// 	printf("\n===\n%s\n%d\n", str, ft_str_is_alpha(str));
// }
