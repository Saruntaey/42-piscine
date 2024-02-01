#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str[][62] = {
		"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un",
		"HELLO, there; 123HOWAREYOU",
		"    HELLO, there; 123HOWAREYOU   ",
		"    9hello, there; 123HOWAREYOU   ",
		" 0aaaAAvvfFFF",
	};
	int i = 0;

	while (i < 5)
	{
		printf("\n===\n\"%s\"\n", str[i]);
		printf("\"%s\"\n", ft_strcapitalize(str[i]));
		i++;
	}
}
