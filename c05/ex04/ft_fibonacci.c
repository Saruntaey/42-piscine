/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:09:36 by satapee           #+#    #+#             */
/*   Updated: 2024/01/29 11:44:11 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	prev;
	int	cur;
	int	next;
	int	i;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	prev = 0;
	cur = 1;
	i = 1;
	while (i < index)
	{
		next = cur + prev;
		prev = cur;
		cur = next;
		i++;
	}
	return (cur);
}

// #include <stdio.h>
// 
// int	ft_fibonacci(int index);
// 
// int	main(void)
// {
// 	int	i;
// 
// 	printf("\n=== fibonacci sequent ===\n");
// 	printf("%d", ft_fibonacci(0));
// 	i = 1;
// 	while (i < 20)
// 	{
// 		printf(", %d", ft_fibonacci(i));
// 		i++;
// 	}
// 	printf("\n");
// }
