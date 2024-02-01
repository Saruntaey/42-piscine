#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	i;

	printf("\n=== fibonacci sequent ===\n");
	printf("%d", ft_fibonacci(0));
	i = 1;
	while (i < 20)
	{
		printf(", %d", ft_fibonacci(i));
		i++;
	}
	printf("\n");
}
