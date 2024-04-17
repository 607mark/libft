#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t n);

int main()
{
	char arr1[6] = "abcde";
	char arr2[6] = "abcde";
	printf("%s\n", arr1);
	ft_memmove(arr1 + 1, arr1, 2);
	printf("%s\n", arr1);
	memmove(arr2 + 1, arr2, 2);
	printf("%s\n", arr2);
}

