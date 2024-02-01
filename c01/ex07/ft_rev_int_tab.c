/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:12:24 by satapee           #+#    #+#             */
/*   Updated: 2024/01/15 13:03:49 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	bound;

	i = 0;
	bound = size / 2;
	while (i < bound)
	{
		ft_swap(&tab[i], &tab[size - i -1]);
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int	main(void)
// {
// 	int a[] = {1, 2, 3};
// 	int b[] = {1, 2, 3, 4};
// 
// 	printf("a before: %d, %d, %d\n", a[0], a[1], a[2]);
// 	ft_rev_int_tab(a, 3);
// 	printf("a  after: %d, %d, %d\n", a[0], a[1], a[2]);
// 
// 	printf("\n===\n");
// 
// 	printf("b before: %d, %d, %d, %d\n", b[0], b[1], b[2], b[3]);
// 	ft_rev_int_tab(b, 4);
// 	printf("b  after: %d, %d, %d, %d\n", b[0], b[1], b[2], b[3]);
// }
// 
