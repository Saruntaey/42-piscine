#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	num;

	num = -2147483648;
	while (num < 1000)
	{
		num = ft_find_next_prime(num);
		printf("%d, ", num);
		num++;
	}

	printf("\n");
	printf("%d\n", ft_find_next_prime(522));
	printf("%d\n", ft_find_next_prime(523));
}
