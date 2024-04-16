#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n);

int main()
{
	char arr[20] = "HELLOOOOOOOOOiiiiii";
	printf("%s\n", arr);
	ft_bzero(arr, 10);
	printf("%s\n", arr);
}

