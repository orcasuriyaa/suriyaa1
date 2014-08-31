/* Program to check whether two integers are evenly divisible or not
   SuriyaaKumar G M, Aug 31 2014 */

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("Enter The two Integers :\n");
	scanf("%d%d", &a, &b);

	c = a % b;

	if (c == 0)
	printf(" %i is evenly divisible by %i\n", a , b);
	else
	printf(" %i is not evenly divisible by %i\n", a, b);

	return 0;

}

