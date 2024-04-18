#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

int main()
{
	char dst1[150] = "As the sun dipped below the horizon, casting hues of orange and pink across the sky, the children laughed and played in the meadow.";
	char dst2[150] = "As the sun dipped below the horizon, casting hues of orange and pink across the sky, the children laughed and played in the meadow.";
	
	char *xample = "TheCrimsonSunsetPaintedTheSkyWithStreaksOfGoldAndPurpleAsTheWavesCrashedAgainstTheRuggedCliffsBelow.";

	int i = 2;
	char *src;
	while (i < 110)
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
}
