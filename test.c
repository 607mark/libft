#include <stdio.h>
#include <stdlib.h>

int ft_atoi (char *str);

int main()
{
	char *s1 = "1000";
	printf("%d\n", ft_atoi(s1));
	printf("%d\n", atoi(s1));
}
