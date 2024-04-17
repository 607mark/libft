#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

int main()
{
	char dst[20] = "11";
	char *src = "Hello World";
	size_t n = ft_strlcpy(dst, src, 10);
	printf("%zu\n%s\n", n, dst);
	char dst2[20] = "11";
	size_t z = strlcpy(&dst2[0], src, 10);
	printf("%zu\n%s\n", z, dst2);
}
