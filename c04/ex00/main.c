#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str[] = {
		"",
		"hello",
	};
	int i = 0;

	while (i < 2)
	{
		printf("\n===\n");
		printf("\"%s\"\n", str[i]);
		printf("len: %d\n", ft_strlen(str[i]));
		i++;
	}
}
