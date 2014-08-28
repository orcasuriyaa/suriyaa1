/* Program to find GCD of Two Non Negative no`s
   SuriyaaKmar G M, Aug27 2014 */

#include<stdio.h>

int main(void)
{
	int u;
	int v;
	int temp;

	printf(" Enter The Two Non negative No`s :\n");
	scanf("%i%i", &u, &v);

	while( V != 0)
	{
	temp = u % v;
	u = v;
	v = temp;
	}

	printf("Their GCD is %i\n", u);
	
	return 0;

}

