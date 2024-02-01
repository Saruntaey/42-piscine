/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:28:07 by satapee           #+#    #+#             */
/*   Updated: 2024/02/01 09:35:32 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_strcpy(char *dest, char *src);
int	get_res_size(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		res_size;
	int		i;
	int		j;

	res_size = get_res_size(size, strs, sep);
	res = malloc(res_size);
	if (!res)
		return (NULL);
	i = 0;
	if (size > 0)
		i += ft_strcpy(res, strs[0]);
	j = 1;
	while (i < res_size - 1 && j < size)
	{
		i += ft_strcpy(&res[i], sep);
		i += ft_strcpy(&res[i], strs[j]);
		j++;
	}
	res[res_size] = '\0';
	return (res);
}

int	get_res_size(int size, char **strs, char *sep)
{
	int		res_size;
	int		sep_len;
	int		i;

	res_size = 1;
	i = 0;
	while (i < size)
	{
		res_size += ft_strlen(strs[i]);
		i++;
	}
	sep_len = ft_strlen(sep);
	if (size > 1)
		res_size += sep_len * (size - 1);
	return (res_size);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// ft_strcpy copy string form src to dest and return length of copied.
int	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
