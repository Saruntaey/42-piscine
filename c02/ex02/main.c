#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main(void)
{
	char *str;

	str = "";
	printf("\n===\n%s\n%d\n", str, ft_str_is_alpha(str));

	str = "AakdirbbZZi";
	printf("\n===\n%s\n%d\n", str, ft_str_is_alpha(str));

	str = "Aak2dirbbZZi";
	printf("\n===\n%s\n%d\n", str, ft_str_is_alpha(str));
}
