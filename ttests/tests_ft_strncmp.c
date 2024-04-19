#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int main()
{
	char *s1 = " !#$%&ā'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
	char *s2 = " !#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
	size_t i = 1844674407370955161;
	while (i)
	{
		printf("%d - %d\n", ft_strncmp(s1, s2, i), strncmp(s1, s2, i));
		i++;
	}	
		size_t max_size = (size_t)-1;
		printf("%zu\n", max_size);
}
