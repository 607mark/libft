#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char dst[10];
	char *p = &dst[0];
	char *src = "Hello World";
	int n = strlcpy(p, src, 10);
	printf("%d\n%s", n, dst);
}
