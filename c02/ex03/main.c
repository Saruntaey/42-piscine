#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *str;

	str = "";
	printf("\n===\n%s\n%d\n", str, ft_str_is_numeric(str));

	str = "109834";
	printf("\n===\n%s\n%d\n", str, ft_str_is_numeric(str));

	str = "109o834";
	printf("\n===\n%s\n%d\n", str, ft_str_is_numeric(str));
}
