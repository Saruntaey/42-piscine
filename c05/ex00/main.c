#include <stdio.h>

int	ft_iterative_factorial(int	nb);

int	main(void)
{
	int num[] = {
		5,
		3,
		2,
		1,
		0,
		-1,
	};
	int i = 0;

	while (i < 6)
	{
		printf("\n===\n");
		printf("factorial (%d): %d\n", num[i], ft_iterative_factorial(num[i]));
		i++;
	}
}
