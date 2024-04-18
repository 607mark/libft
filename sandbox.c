#include <string.h>
#include <stdio.h>

int main()
{
	char dst[20] = "Hello ";
	char *src = "world";
	size_t c = strlcat(dst, src, 2);
	printf("%zu\n%s", c, dst);
}
