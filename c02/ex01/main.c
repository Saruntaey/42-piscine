#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
void show_chars(char *str, int size);
void show_char(char c);

int main(void)
{
	char str[6];

	ft_strncpy(str, "hello", 6);
	show_chars(str, 6);

	printf("\n===\n");
	ft_strncpy(str, "hi there how are you", 6);
	show_chars(str, 6);
}

void show_chars(char *str, int size)
{
	int	i;

	if (size > 0)
		show_char(str[0]);
	i = 1;
	while (i < size)
	{
		printf(", ");
		show_char(str[i]);
		i++;
	}
}

void show_char(char c)
{
	if (c == '\0')
		printf("\\0");
	else 
		printf("%c", c);
}
