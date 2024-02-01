#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char str[][6] = {
		"",
		"Hello",
		"HI",
		"howdy",
		"A",
		"Z",
	};
	int i = 0;

	while (i < 6)
	{
		printf("\n===\n\"%s\"\n", str[i]);
		printf("\"%s\"\n", ft_strlowcase(str[i]));
		i++;
	}
}
