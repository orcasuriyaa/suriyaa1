/* initializing array value to zero
 * SuriyaaKumar G M, August8 2014 */

#include <stdio.h>

int main(void)
{
	int values[10];
	int index;
	
	values[0] = 197;
	values[1] = 24;
	values[2] = -100;
	values[5] = 350;
	values[4] = 9;
	values[3] = values[0] + values[5];
	values[6] = 0;
	values[7] = 0;
	values[9] = values[5] / 10;	
	for( index = 0; index < 10; ++index )
	{
	values[index] = 0;
	printf("values[%i] = %i\n", index, values[index]); 
	printf("enter the value");
	scanf("%i", &values[index]);
	printf("values[%i] = %i\n", index, values[index]);
	}
	
	return 0;
}
