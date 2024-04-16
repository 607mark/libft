#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memcpy(void *dst, const void *src, size_t n);

int main()
{
	int str1[5] = {1,2,3};
	int str2[5] = {1,2,3};
	printf("%d %d, %d\n", str1[0], str1[1], str1[2]);
	memcpy(str1, str1 + 2, 2 * sizeof(int));
	printf("%d %d, %d\n", str1[0], str1[1], str1[2]);
	ft_memcpy(str2, str2 + 2, 2 * sizeof(int));
	printf("%d %d, %d\n", str2[0], str2[1], str2[2]);

}

