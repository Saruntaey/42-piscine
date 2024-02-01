#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int	ft_atoi_base(char *str, char *base, int *num);
int	ft_number_base(int num, char *base, char **res);
int	count_digit(int	num, int radix);
int	get_radix(char *base);
int	is_dup(char *str);
int	is_space(char c);
int	is_numchar(char c);

int	main(void)
{
	printf("%s\n", ft_convert_base("10", "0123456789", "01"));
}
