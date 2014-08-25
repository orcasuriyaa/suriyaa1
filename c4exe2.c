#include <stdio.h>

int main(void)
{
	int a = 50;
	int b = 1;
	int c = 15;
	int d = 2;
	int result;

	result = a - b; 
	printf ("a - b = %i\n", result);

	result = b * c;
	printf ("b * c = %i\n", result);

	result = a / c;
	printf ("a / c = %i\n", result);

	result = a + b * c; 
	printf ("a + b * c = %i\n", result);

	printf ("a * b + c * d = %i\n", a * b + c * d);

	return 0;
}
