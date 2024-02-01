#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main(void)
{
	char *str[] = {
		"",
		"hello",
		"Hello",
		"howdy123",
	};
	int i = 0;

	while (i < 4)
	{
		printf("\n===\n\"%s\"\n%d\n", str[i], ft_str_is_lowercase(str[i]));
		i++;
	}
}
