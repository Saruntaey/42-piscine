#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void print_char_arr(char *str, int size);
void set_char_arr(char *arr, int size, char c);

int main(void)
{
	char dest_ori[6];
	char dest_ft[6];
	char *str[] = {
		"",
		"hello",
		"hello there",
	};
	int i = 0;
	while (i < 3)
	{
		set_char_arr(dest_ori, 6, 'z');
		set_char_arr(dest_ft, 6, 'z');
		printf("\n===\n\"%s\"\n", str[i]);
		printf("strlcpy: %lu\n", strlcpy(dest_ori, str[i], 6));
		print_char_arr(dest_ori, 6);
		printf("\n");
		printf("ft_strlcpy: %u\n", ft_strlcpy(dest_ft, str[i], 6));
		print_char_arr(dest_ft, 6);
		printf("\n");
		i++;
	}
	printf("\n===\ndis_size = 0\nstrlcpy: %lu\nft_strlcpy: %u\n", strlcpy(0, "test zero", 0), ft_strlcpy(0, "test zero", 0));
}

void print_char_arr(char *str, int size)
{
	int i;

	if (size > 0)
		printf("%c", str[0]);
	i = 1;
	while (i < size)
	{
		printf(", "); 
		if (str[i])
			printf("%c", str[i]);
		else
			printf("\\0");
		i++;
	}
}	

void set_char_arr(char *arr, int size, char c)
{
	int	i;

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
}
