#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int i;

	// 2147395600
	i = 2147483647;
	while (i >= 2147395600)
	{
		printf("\n===\n");
		printf("sqrt(%d): %d\n", i, ft_sqrt(i));
		i--;
	}
}
