/* Program to categorize a single character that is entered at the terminal
   SuriyaaKumar G M, Aug30 2014 */

#include <stdio.h>

int main(void)
{
	char c;


	printf("Enter the character :");
	scanf("%c", &c);

	if( ( c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	
	printf(" The character is alphabetic");
	
	else if ( c >= '0' && c <= '9')
		
	printf(" The character is Numeric \n");
	
	else
	
	printf(" the character is special character ");

	return 0;

}

