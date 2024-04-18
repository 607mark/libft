#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize);

int main()
{
	char dst1[150] = "Hello ";
	char dst2[150] = "Hello ";
	char *src = "world";
		
	int i = 1;
	while (i < 20)
	{
		int r1 = ft_strlcat(dst1, src, i);
		int r2 = strlcat(dst2, src, i);
		printf("%d = %d\n", r1, r2);
		printf("%s\n%s\n", dst1, dst2);
		i++;
	}
/*
	while
	{	
		src = (char *)malloc(i * sizeof(char));
		if( !src)
			return (0);
		strncpy(src, xample, i - 1);
		*(src + i) = '\0';
		int r1 = ft_strlcpy(dst1, src, i);
		int r2 = strlcpy(dst2, src, i);
		printf("%d - %d\n", r1, r2);
		printf("%s\n%s\n", dst1, dst2);
		free (src);
		i++;
	}
*/
}
