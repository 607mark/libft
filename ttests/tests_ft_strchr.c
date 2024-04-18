#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>

char *ft_strchr(const char *s, int c);

int main()
{
	char *s = "#$%&'()\0*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[^_`abcdefghijklmnopqrstuvwxyz{|}~";
	printf("%p\n", ft_strchr(s, '\0')); 
	printf("%p\n", strchr(s, '\0')); 
}
