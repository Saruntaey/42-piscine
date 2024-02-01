/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:05:47 by satapee           #+#    #+#             */
/*   Updated: 2024/01/15 13:03:07 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

// int	main(void)
// {
// 	printf("\n===\n\nlen=%d\n", ft_strlen(""));
// 	printf("\n===\nhello\nlen=%d\n", ft_strlen("hello"));
// }
