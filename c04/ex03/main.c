#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char *str[] = {
		"0",
		"123",
		"-123",
		"+++123",
		"---123",
		"---+--+123",
		"+++-++-123",
		"        +++-++-123",
		"        \t\n\v\f\r   +++-++-123",
		"        +++-++-            123",
		"+++-++-12asdf3",
		"2147483647",
		"-2147483648",
		"2147483648",
		"-2147483649",
	};
	int	i = 0;

	while (i < 14)
	{
		printf("\n===\n");
		printf("\"%s\"\n", str[i]);
		printf("%d\n", ft_atoi(str[i]));
		i++;
	}
}
