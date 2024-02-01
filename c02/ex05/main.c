#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
	char *str[] = {
		"",
		"HELLO",
		"Hello",
	};
	int	i = 0;

	while (i < 3)
	{
		printf("\n===\n\"%s\"\n%d\n", str[i], ft_str_is_uppercase(str[i]));
		i++;
	}
}
