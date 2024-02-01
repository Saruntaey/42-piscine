#include <stdio.h>

int	*ft_range(int min, int max);
void put_arr(int *tab, int size);

int	main(void)
{
	int *arr;

	arr = ft_range(5, 8);
	put_arr(arr, 3);
}

void put_arr(int *tab, int size)
{
	int i;

	if (!tab)
	{
		printf("null");
		return ;
	}
	if (size > 0)
		printf("%d", tab[0]);
	i = 1;
	while (i < size)
	{
		printf(" | %d", tab[i]);
		i++;
	}
	printf("\n");
}
