#include <stdio.h>
#include <string.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
int main()
{
	char *s1 = "LOOOOLa";
	char *s2 = "LOOOOLa";
	size_t n = 100;
	
	printf("%p\n",ft_strnstr(s1, s2, n));
	printf("%p\n",strnstr(s1, s2, n));
}
