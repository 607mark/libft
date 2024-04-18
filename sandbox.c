#include <string.h>
#include <stdio.h>

int main()
{
	int a = -128;
	while(a < 128)
	{
		printf("%c", a++);
	}
}
