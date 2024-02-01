#include <stdio.h>

#define BASE_N 11
#define NUM_N 5

int	ft_atoi_base(char *str, char *base);
int	index_of(char *str, char c);

// int main(void)
// {
// 	char *str = "abc";
// 	char c[] = {
// 		'a',
// 		'b',
// 		'c',
// 		'd',
// 	};
// 	int	i = 0;
// 
// 	printf("\"%s\"\n", str);
// 	while (i < 4)
// 	{
// 		printf("finding %c: %d\n", c[i], index_of(str, c[i]));
// 		i++;
// 	}
// }

int	main(void)
{
	char *bases[] = {
		"0123456789",
		"01",
		"0123456789abcdef",
		"01234567",
		"",
		"0",
		"pon+eyvi",
		"pon-eyvi",
		"not_dup",
		"dupplicateeeee",
		"with space",
	};
	char *nums[] = {
		"1010",
		"-1010",
		"   ++--++1010",
		"-++--1010",
		"-++--t",
	};
	int i;
	int j;

	i = 0;
	while (i < NUM_N)
	{
		printf("\n");
		printf("\n================================================================================");
		printf("\nnum str: \"%s\"", nums[i]);
		printf("\n================================================================================");
		j = 0;
		while (j < BASE_N)
		{
			printf("\nbase: \"%s\"\n", bases[j]);
			printf("%d\n", ft_atoi_base(nums[i], bases[j]));
			j++;
		}
		i++;
	}
}
