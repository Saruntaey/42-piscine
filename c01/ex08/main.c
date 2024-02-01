#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);
void	print_arr(int *tab, int size);

int	main(void)
{
	int a[] = {23, 42, 2, 10, 5};
	int b[] = {111};

	printf("\ntest 1\n");
	print_arr(a, 5);
	printf("\n");
	ft_sort_int_tab(a, 5);
	print_arr(a, 5);
	printf("\n");

	printf("\ntest 2\n");
	print_arr(b, 1);
	printf("\n");
	ft_sort_int_tab(b, 1);
	print_arr(b, 1);
	printf("\n");
}

void	print_arr(int *tab, int size)
{
	int	i;

	if (size > 0)
		printf("%d", tab[0]);
	i = 1;
	while (i < size)
	{
		printf(", %d", tab[i]);
		i++;
	}
}
