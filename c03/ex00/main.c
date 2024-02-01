#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	char *s1[] = {
		"",
		"hello",
		"hel",
		"hello",
	};
	char *s2[] = {
		"",
		"hel",
		"hello",
		"hello",
	};
	int i = 0;

	while (i < 4)
	{
		printf("\n===\ns1: \"%s\"\ns2: \"%s\"\nstrcmp: %d\nft_strcmp: %d\n", s1[i], s2[i], strcmp(s1[i], s2[i]), ft_strcmp(s1[i], s2[i]));
		i++;
	}
}
