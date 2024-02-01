#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);
void set_arr(char *arr, int size, char c);
void print_arr(char *arr, int size);
void put_char(char c);

int	main(void)
{
	char dest_ori[40];
	char dest_ft[40];
	char *src[] = {
		"hello",
		" there,",
		" how",
		" are",
		" you?",
	};
	int	i;

	set_arr(dest_ori, 40, 'x');
	set_arr(dest_ft, 40, 'x');
	dest_ori[0] = '\0';
	dest_ft[0] = '\0';
	i = 0;
	while (i < 5)
	{
		printf("\n===\n");
		printf("concat: %s\n", src[i]);
		strcat(dest_ori, src[i]);
		ft_strcat(dest_ft, src[i]);
		printf("strcat:    ");
		print_arr(dest_ori, 40);
		printf("\n");
		printf("ft_strcat: ");
		print_arr(dest_ft, 40);
		printf("\n");
		i++;
	}
}

void set_arr(char *arr, int size, char c)
{
	int	i;

	i = 0;
	while (i < size)
		arr[i++] = c;
}

void print_arr(char *arr, int size)
{
	int	i;

	if (size > 0)
		put_char(arr[0]);
	i = 1;
	while (i < size)
	{
		printf(" | ");
		put_char(arr[i]);
		i++;
	}
}

void put_char(char c)
{
	if (!c)
		printf("\\0");
	else
		printf("%c", c);
}
