/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:42:07 by satapee           #+#    #+#             */
/*   Updated: 2024/01/14 18:58:34 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;
// 
// 	a = 11;
// 	b = 3;
// 
// 	ft_div_mod(a, b , &div, &mod);
// 	printf("div = %d, mod = %d\n", div, mod);
// }
