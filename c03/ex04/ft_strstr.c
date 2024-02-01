/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:25:06 by satapee           #+#    #+#             */
/*   Updated: 2024/01/24 18:27:01 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*str && !*to_find)
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] && to_find[i] && str[i] == to_find[i])
			i++;
		if (!to_find[i])
			return (str);
		else if (!str[i])
			return (0);
		str++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *str = "Foo Bar Baz";
// 	char *find[] = {
// 		"Foo",
// 		"Bar",
// 		"Baz",
// 		"bar",
// 	};
// 	int	i = 0;
// 
// 	printf("\"%s\"\n", str);
// 	while (i < 4)
// 	{
// 		printf("\n===\n");
// 		printf("find: \"%s\"\n", find[i]);
// 		printf("strstr:    \"%s\"\n", strstr(str, find[i]));
// 		printf("ft_strstr: \"%s\"\n", ft_strstr(str, find[i]));
// 		i++;
// 	}
// }
