#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char *src = "hello there";
	char dest[14];

	ft_strcpy(dest, src);
	printf("%s", dest);
}
