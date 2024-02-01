/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:52:25 by satapee           #+#    #+#             */
/*   Updated: 2024/01/22 11:34:49 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define MAX_LEN 16

void	put_hex_addr(unsigned long num);
void	put_hex_str(char *str, unsigned int size);
void	put_hex_char(unsigned char c);
void	put_printable_char(char *str, unsigned int size);

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		len;
	void	*addr_rec;

	addr_rec = addr;
	while (1)
	{
		if (size > MAX_LEN)
			len = MAX_LEN;
		else
			len = size;
		put_hex_addr((unsigned long) addr);
		write(1, ":", 1);
		put_hex_str((char *) addr, len);
		write(1, " ", 1);
		put_printable_char((char *) addr, len);
		write(1, "\n", 1);
		if (size <= MAX_LEN)
			break ;
		size -= MAX_LEN;
		addr += len;
	}
	return (addr_rec);
}

void	put_hex_addr(unsigned long num)
{
	char	*hex;
	char	buff[16];
	int		i;

	hex = "0123456789abcdef";
	i = 16;
	while (num > 0 && i > 0)
	{
		i--;
		buff[i] = hex[num % 16];
		num /= 16;
	}
	while (i > 0)
	{
		i--;
		buff[i] = '0';
	}
	write(1, buff, 16);
}

void	put_printable_char(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] < 32 || str[i] > 126)
			write(1, ".", 1);
		else
			write(1, str + i, 1);
		i++;
	}
}

void	put_hex_str(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < MAX_LEN)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		if (i < size)
			put_hex_char(str[i]);
		else
			write(1, "  ", 2);
		i++;
	}
}

void	put_hex_char(unsigned char c)
{
	char	*hex;
	char	buff[2];
	int		i;

	hex = "0123456789abcdef";
	i = 2;
	while (c > 0 && i > 0)
	{
		i--;
		buff[i] = hex[c % 16];
		c /= 16;
	}
	while (i > 0)
	{
		i--;
		buff[i] = '0';
	}
	write(1, buff, 2);
}

// int	main(void)
// {
// 	ft_print_memory("\x42\x6f\x6e\x6a\x6f\x75\x72\x20\x6c\x65\x73\x20\x61\x6d\
// \x69\x6e\x63\x68\x65\x73\x09\x0a\x09\x63\x07\x20\x65\x73\x74\x20\x66\x6f\x75\
// \x09\x74\x6f\x75\x74\x09\x63\x65\x20\x71\x75\x20\x6f\x6e\x20\x70\x65\x75\x74\
// \x20\x66\x61\x69\x72\x65\x20\x61\x76\x65\x63\x09\x0a\x09\x70\x72\x69\x6e\x74\
// \x5f\x6d\x65\x6d\x6f\x72\x79\x0a\x0a\x0a\x09\x6c\x6f\x6c\x2e\x6c\x6f\x6c\x0a\
// \x20\x00", 92);
// 	// ft_print_memory("\x80\x81\x82\x83", 4);
// }
