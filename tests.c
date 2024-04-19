#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main()
{
//	char *s1 = " !#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}i///";
//	char *s2 = " !#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}i///";
	size_t n = 0;
	
	unsigned char myArray[5]; // Creating an array of 5 unsigned chars

    // Assigning values to the array elements
    myArray[0] = 200;
    myArray[1] = 'e';
    myArray[2] = 'l';
    myArray[3] = 'l';
    myArray[4] = 'o';

unsigned char myArray1[5]; // Creating an array of 5 unsigned chars

    // Assigning values to the array elements
    myArray1[0] = 0;
    myArray1[1] = 'e';
    myArray1[2] = 'l';
    myArray1[3] = 'l';
    myArray1[4] = 'o';
	
	while (n < 200)
	{
		printf("%d - ", ft_memcmp((void *)myArray, (void *)myArray1, n));
		printf("%d - ", memcmp((void *)myArray, (void *)myArray1, n));
		n++;
	}
}
