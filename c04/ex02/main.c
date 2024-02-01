#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	int str[] = {
		-123,
		-10,
		-9,
		-8,
		-7,
		-6,
		-5,
		-4,
		-3,
		-2,
		-1,
		0,
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9,
		10,
		1234,
		-1234,
		10001,
		-2147483648,
		2147483647,
	};
	int i = 0;

	while (i < 27)
	{
		printf("\n===\n");
		printf("input: %d\n", str[i]);
		ft_putnbr(str[i]);
		printf("\n");
		i++;
	}
}
