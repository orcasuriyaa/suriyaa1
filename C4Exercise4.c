/* Program to convert 27 degree fahrenheit to degree celsius
   SuriyaaKumar G M, Aug25 2014 */

#include<stdio.h>

int main(void)
{

	int c;
	int f = 27;

	c = (f - 32) / 1.8;

	printf("27 degree fahrenheit is equal to %i degree celsius", c);

	return 0;

}

