#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int a[] = {1, 2, 3};
	int b[] = {1, 2, 3, 4};

	printf("a before: %d, %d, %d\n", a[0], a[1], a[2]);
	ft_rev_int_tab(a, 3);
	printf("a  after: %d, %d, %d\n", a[0], a[1], a[2]);

	printf("\n===\n");

	printf("b before: %d, %d, %d, %d\n", b[0], b[1], b[2], b[3]);
	ft_rev_int_tab(b, 4);
	printf("b  after: %d, %d, %d, %d\n", b[0], b[1], b[2], b[3]);
}

