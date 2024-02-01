#include <stdio.h>

#define BASE_N 10
#define NUM_N 9

void	ft_putnbr_base(int nbr, char *base);
int		is_dup(char *str);

// int	main(void)
// {
// 	char *str[] = {
// 		"",
// 		"1234",
// 		"12342",
// 	};
// 	int i = 0;
// 
// 	while (i < 3)
// 	{
// 		printf("\n===\n\"%s\"\n%d\n", str[i], is_dup(str[i]));
// 		i++;
// 	}
// }

int	main(void)
{
	char *bases[] = {
		"0123456789",
		"01",
		"0123456789abcdef",
		"poneyvif",
		"",
		"0",
		"pon+eyvi",
		"pon-eyvi",
		"not_dup",
		"dupplicateeeee",
	};
	int nums[] = {
		-9,
		-1,
		0,
		1,
		9,
		10,
		-10,
		42,
		-42,
	};
	int i;
	int j;

	i = 0;
	while (i < NUM_N)
	{
		printf("\n");
		printf("\n================================================================================");
		printf("\nnum: %d", nums[i]);
		printf("\n================================================================================");
		j = 0;
		while (j < BASE_N)
		{
			printf("\nbase: \"%s\"\n", bases[j]);
			ft_putnbr_base(nums[i], bases[j]);
			j++;
		}
		i++;
	}
}
