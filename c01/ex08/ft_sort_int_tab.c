/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:32:41 by satapee           #+#    #+#             */
/*   Updated: 2024/01/15 13:04:51 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b);
int		pivot(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	pivot_idx;

	if (size <= 1)
		return ;
	pivot_idx = pivot(tab, size);
	ft_sort_int_tab(tab, pivot_idx);
	ft_sort_int_tab(&tab[pivot_idx + 1], size - pivot_idx -1);
}

int	pivot(int *tab, int size)
{
	int	pivot_idx;
	int	i;

	pivot_idx = 0;
	i = 1;
	while (i < size)
	{
		if (tab[i] < tab[0])
		{
			pivot_idx++;
			swap(&tab[i], &tab[pivot_idx]);
		}
		i++;
	}
	swap(&tab[0], &tab[pivot_idx]);
	return (pivot_idx);
}

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int	main(void)
// {
// 	int a[] = {23, 42, 2, 10, 5};
// 	int b[] = {111};
// 
// 	printf("\ntest 1\n");
// 	print_arr(a, 5);
// 	printf("\n");
// 	ft_sort_int_tab(a, 5);
// 	print_arr(a, 5);
// 	printf("\n");
// 
// 	printf("\ntest 2\n");
// 	print_arr(b, 1);
// 	printf("\n");
// 	ft_sort_int_tab(b, 1);
// 	print_arr(b, 1);
// 	printf("\n");
// }
// 
// void	print_arr(int *tab, int size)
// {
// 	int	i;
// 
// 	if (size > 0)
// 		printf("%d", tab[0]);
// 	i = 1;
// 	while (i < size)
// 	{
// 		printf(", %d", tab[i]);
// 		i++;
// 	}
// }
