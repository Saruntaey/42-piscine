/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:23:47 by satapee           #+#    #+#             */
/*   Updated: 2024/01/24 18:55:55 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	i = max - min;
	arr = malloc(i);
	if (!arr)
		return (NULL);
	while (i > 0)
	{
		i--;
		arr[i] = min + i;
	}
	return (arr);
}
