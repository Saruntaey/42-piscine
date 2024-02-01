/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:54:47 by satapee           #+#    #+#             */
/*   Updated: 2024/02/01 14:44:50 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n);
void			free_split(char **str);
int				count_word(char *str, char *charset);
int				next_str(char **str, char *charset);
int				is_contain_char(char *str, char c);

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**res;
	int		i;
	int		str_len;

	words = count_word(str, charset);
	res = malloc(sizeof(*res) * (words + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < words)
	{
		str_len = next_str(&str, charset);
		res[i] = malloc(str_len + 1);
		if (!res[i])
		{
			free_split(res);
			return (NULL);
		}
		ft_strlcpy(res[i], str, str_len + 1);
		str += str_len;
		i++;
	}
	res[words] = 0;
	return (res);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && n > 0 && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

void	free_split(char **str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	count_word(char *str, char *charset)
{
	int	count;
	int	is_first_char;

	count = 0;
	is_first_char = 1;
	while (*str)
	{
		if (is_first_char && !is_contain_char(charset, *str))
		{
			count++;
			is_first_char = 0;
		}
		else if (!is_first_char && is_contain_char(charset, *str))
			is_first_char = 1;
		str++;
	}
	return (count);
}

int	next_str(char **str, char *charset)
{
	int	i;

	while (**str && is_contain_char(charset, **str))
		(*str)++;
	i = 0;
	while ((*str)[i] && !is_contain_char(charset, (*str)[i]))
		i++;
	return (i);
}

int	is_contain_char(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
