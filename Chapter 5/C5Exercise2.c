/* Program to generate and display a table of n and n^2
   SuriyaaKumar G M, Aug28 2014 */

#include<stdio.h>

int main(void)
{
	int n;
	int Square;

	printf("TABLE OF SQUARES\n\n");
	printf(" n   Squares Of n \n");
	printf("---  ---------------\n");

	Square = 0;

	for(n = 1; n<= 10; ++n)
	{
	Square = n*n;
	printf("%i        %i\n", n, Square);
	}
	
	return 0;
}

