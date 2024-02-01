#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char *s1 ="hello there";
	char *s2 = "hello how are you";
	int	cmp_len[] = {0, 5, 6, 7, 8, 17};
	int i = 0;

	while (i < 6)
	{
		printf("\n===\ns1: \"%s\"\ns2: \"%s\"\ncpm_len: %d\nstrncmp: %d\nft_strncmp: %d\n", s1, s2, cmp_len[i], strncmp(s1, s2, cmp_len[i]), ft_strncmp(s1, s2, cmp_len[i]));
		i++;
	}

}
