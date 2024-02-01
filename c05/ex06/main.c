#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	i;

	i = 0;
	while (i < 1000)
	{
		if (ft_is_prime(i))
			printf("%d, ", i);
		i++;
	}
	printf("\n");
}
