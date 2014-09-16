/* To Caculate RMS
   SuriyaaKumar G M, September 2014 */

#include <stdio.h>
#include <math.h>

int main(void)
{
	int a[10],i,sum=0;
	float avg,rms;
	
	printf("Enter 3 Values");
	
	for ( i=0; i<3;++i)
		{
		
			scanf("%i",&a[i]);	
		}
	for(i=0;i<3;i++)

		{
 		sum =sum+ a[i]*a[i];
 		}
 		
	printf("sum is%i",sum);

	avg = (float)sum/3;
	printf("\n Average is %f",avg);
	
	rms= sqrt (avg);
	printf("\n Rms is%f",rms);
	
	return 0;
}
