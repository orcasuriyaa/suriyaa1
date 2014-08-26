/* Program to Convert Time in Seconds to Hours, Minutes and Seconds
SuriyaaKumar G M  Aug25 2014 */

#include <stdio.h>

int main(void)
{
	int sec;
	int hr;
	int min;
	int t;

	printf("\nEnter time in seconds: ");
	scanf("%ld", &sec);

	hr = sec/3600;
	t = sec%3600;
	min = (sec/60)%60;
	sec = t%60;

	printf("\n\nTime is %d hrs %d mins %d secs", hr, min, sec);

	return 0;
}