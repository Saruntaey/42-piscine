#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char **split;
	int	i;

	split = ft_split("hello there, how, are you, doing, hi", ",");

	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}
