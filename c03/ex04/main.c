#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char *str = "";

	printf("%ld\n", (unsigned long) strstr(str, ""));
	printf("%ld\n", (unsigned long) ft_strstr(str, ""));
}

// int	main(void)
// {
// 	char *str = "Foo Bar Baz";
// 	char *find[] = {
// 		"Foo",
// 		"Bar",
// 		"Baz",
// 		"bar",
// 	};
// 	int	i = 0;
// 
// 	printf("\"%s\"\n", str);
// 	while (i < 4)
// 	{
// 		printf("\n===\n");
// 		printf("find: \"%s\"\n", find[i]);
// 		printf("strstr:    \"%s\"\n", strstr(str, find[i]));
// 		printf("ft_strstr: \"%s\"\n", ft_strstr(str, find[i]));
// 		i++;
// 	}
// }
