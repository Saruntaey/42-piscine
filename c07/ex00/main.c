#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char *str[] = {
		"",
		"hello",
		"hello there, how are you",
	};
	int	i = 0;

	while (i < 3)
	{
		printf("\n===\n");
		printf("\"%s\"\n", str[i]);
		printf("strdup:    \"%s\"\n", strdup(str[i]));
		printf("ft_strdup: \"%s\"\n", ft_strdup(str[i]));
		i++;
	}
}
