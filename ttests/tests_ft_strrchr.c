#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>

char *ft_strrchr(const char *s, int c);

int main()
{
	char *s = " !#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
	int i = 0;
	while (i < 128)
	{
		printf("%p\n", ft_strrchr(s, i)); 
		printf("%p\n\n", strrchr(s, i));
		i++;
	}
}
