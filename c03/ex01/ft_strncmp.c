/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:40:09 by satapee           #+#    #+#             */
/*   Updated: 2024/01/24 12:45:08 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n && n > 0)
		i--;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

// int main(void)
// {
// 	char *s1 ="hello there";
// 	char *s2 = "hello how are you";
// 	int	cmp_len[] = {0, 5, 6, 7, 8, 17};
// 	int i = 0;
// 
// 	while (i < 6)
// 	{
// 		printf("\n===\ns1: \"%s\"\ns2: \"%s\"\n\
// cpm_len: %d\nstrncmp: %d\nft_strncmp: %d\n",
// 			   	s1,
// 			   	s2,
// 			   	cmp_len[i],
// 			   	strncmp(s1, s2, cmp_len[i]),
// 			   	ft_strncmp(s1, s2, cmp_len[i]));
// 		i++;
// 	}
// 
// }
