/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:08:24 by satapee           #+#    #+#             */
/*   Updated: 2024/01/29 12:28:26 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			put_str(char *str);
int				ft_strcmp(char *s1, char *s2);
void			sort(char *tab[], unsigned int size);
void			swap(char **p1, char **p2);
unsigned int	pivot(char **tab, unsigned int size);

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
		sort(&argv[1], argc - 1);
	i = 1;
	while (i < argc)
	{
		put_str(argv[i]);
		put_str("\n");
		i++;
	}
}

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

void	sort(char **tab, unsigned int size)
{
	unsigned int	pivot_idx;

	if (size < 2)
		return ;
	pivot_idx = pivot(tab, size);
	sort(tab, pivot_idx);
	sort(tab + pivot_idx + 1, size - pivot_idx - 1);
}

unsigned int	pivot(char **tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	pivot_idx;
	char			*tmp;

	i = 1;
	pivot_idx = 0;
	while (i < size)
	{
		if (ft_strcmp(tab[0], tab[i]) > 0)
		{
			pivot_idx++;
			tmp = tab[pivot_idx];
			tab[pivot_idx] = tab[i];
			tab[i] = tmp;
		}
		i++;
	}
	if (pivot_idx != 0)
	{
		tmp = tab[0];
		tab[0] = tab[pivot_idx];
		tab[pivot_idx] = tmp;
	}
	return (pivot_idx);
}

// void	swap(char **p1, char **p2)
// {
// 	char	*tmp;
// 
// 	tmp = *p1;
// 	*p1 = *p2;
// 	*p2 = tmp;
// }
