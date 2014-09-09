/* working with arrays avg of ten float arrays
 SuriyaaKumar G M, August8 2014 */

#include <stdio.h>

int main(void)
{
	float values[10];
	int index;
	float value;
	float avg;
	
	for( index = 0; index < 10; ++index )
	{
	values[index] = 0;
	printf("values[%i] = %f\n\n", index, values[index]); 
	printf("enter the value\n");
	scanf("%f", &values[index]);
	printf("values[%i] = %f\n", index, values[index]);
	}
	
	value = 0;
	for( index = 0; index < 10; ++index )
	{
		value += values[index];
		avg = value / 10;
	}
	printf("%f\n", avg);
	
	
	return 0;
}
