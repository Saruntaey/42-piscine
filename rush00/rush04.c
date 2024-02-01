/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:48:41 by satapee           #+#    #+#             */
/*   Updated: 2024/01/15 12:44:25 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void put_row(int size, char start, char mid, char end);

void	rush(int col, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (i == 0)
			put_row(col, 'A', 'B', 'C');
		else if (i == row -1)
			put_row(col, 'C', 'B', 'A');
		else
			put_row(col, 'B', ' ', 'B');
		ft_putchar('\n');
		i++;
	}
}


void put_row(int size, char start, char mid, char end)
{
	int i;
	
	i = 0;
	while(i < size)
	{
		if (i == 0)
			ft_putchar(start);
		else if (i == size -1)
			ft_putchar(end);
		else
			ft_putchar(mid);
		i++;
	}
}

