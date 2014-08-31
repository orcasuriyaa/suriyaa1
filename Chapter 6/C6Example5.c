/* Program to find Leap year or not 
   SuriyaaKumar G M, Aug30 2014 */

#include <stdio.h>

int main(void)
{
	int year;
	int rem_4;
	int rem_100;
	int rem_400;

	printf("Enter the Year to be Tested :\n");
	scanf("%d", &year);

	rem_4 = year % 4;
	rem_100 = year % 100;
	rem_400 = year % 400;

	if(rem_4 == 0 & rem_100 !=0 || rem_400 == 0)
	
	printf(" The year is a leap year ");
	
	else
	
	printf(" Nope The year is not a leap year ");
	
	return 0:
}



