/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:39:57 by satapee           #+#    #+#             */
/*   Updated: 2024/01/14 18:58:04 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int main(void)
// {
// 	int a;
// 	int b;
// 
// 	a = 1;
// 	b = 2;
// 	printf("a = %d, b = %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("a = %d, b = %d\n", a, b);
// }
