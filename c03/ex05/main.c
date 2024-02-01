#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
void set_arr(char *arr, int size, char c);
void print_arr(char *arr, int size);
void put_char(char c);

int	main(void)
{
	char dest_ori[10] = "I am here for long long time ago.";
	char dest_ft[10] =  "I am here for long long time ago.";
	char *src[] = {
		"hello",
		" there,",
		" how",
		" are",
		" you?",
	};
	int	i;

	// set_arr(dest_ori, 10, 'x');
	// set_arr(dest_ft, 10, 'x');
	// dest_ori[0] = '\0';
	// dest_ft[0] = '\0';
	print_arr(dest_ori, 10);
	printf("\n");
	print_arr(dest_ft, 10);
	i = 0;
	while (i < 5)
	{
		printf("\n===\n");
		printf("concat: \"%s\", with n=%d\n", src[i], 10);
		printf("strlcat    (return: %02lu):", strlcat(dest_ori, src[i], 10));
		print_arr(dest_ori, 10);
		printf("\n");
		printf("ft_strlcat (return: %02u):", ft_strlcat(dest_ft, src[i], 10));
		print_arr(dest_ft, 10);
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
		printf(" \'%c\'", c);
}
