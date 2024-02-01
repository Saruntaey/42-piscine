#include <stdio.h>

int	ft_str_is_printable(char *str);

int main(void)
{
	char *str[] = {
		"",
		" ",
		"hello",
		"\x68llo",
		"hello\n",
		"h\x7e",
		"h\x7f",
	};
	int i = 0;

	while (i < 7)
	{
		printf("\n===\n\"%s\"\n%d\n", str[i], ft_str_is_printable(str[i]));
		i++;
	}
}
