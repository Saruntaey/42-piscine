#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char str[][15] = {
		"",
		"Hello",
		"HI",
		"abc1234$*!xyz",
		"a",
		"z",
	};
	int i = 0;

	while ( i < 6)
	{
		printf("\n===\n\"%s\"\n", str[i]);
		printf("\"%s\"\n", ft_strupcase(str[i]));
		i++;
	}
}
