#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
	int n;
	n = 8;
	printf("n = %d\n", n);
	ft_ft(&n);
	printf("n = %d\n", n);
}
