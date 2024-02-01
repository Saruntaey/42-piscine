/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:01:07 by satapee           #+#    #+#             */
/*   Updated: 2024/01/17 15:11:55 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// void show_char(char c)
// {
// 	if (c == '\0')
// 		printf("\\0");
// 	else 
// 		printf("%c", c);
// }
//
// void show_chars(char *str, int size)
// {
// 	int	i;
// 
// 	if (size > 0)
// 		show_char(str[0]);
// 	i = 1;
// 	while (i < size)
// 	{
// 		printf(", ");
// 		show_char(str[i]);
// 		i++;
// 	}
// }
//
// int main(void)
// {
// 	char str[6];
// 
// 	ft_strncpy(str, "hello", 6);
// 	show_chars(str, 6);
// 
// 	printf("\n===\n");
// 	ft_strncpy(str, "hi there how are you", 6);
// 	show_chars(str, 6);
// }
