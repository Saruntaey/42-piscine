/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:06:18 by satapee           #+#    #+#             */
/*   Updated: 2024/01/24 11:20:14 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int		len;
	char	*clone;

	len = ft_strlen(src);
	clone = malloc(len + 1);
	if (!clone)
		return (NULL);
	clone[len] = '\0';
	while (len)
	{
		len--;
		clone[len] = src[len];
	}
	return (clone);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
