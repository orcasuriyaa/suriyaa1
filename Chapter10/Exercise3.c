/* function to count the words including numbers
  SuriyaaKumar G M, september 2014 */
 
 #include <stdio.h>
 #include<stdbool.h>
 
 bool isalphabetic(const char c)
 {
 	if((c >= 'a' && c <= 'z') ||( c >= 'A' && c <= 'Z') || c == '`' || (c >= '0' && c <= '9') || c ==',' || c == '+' || c == '-')
 	{
 		return true;	
 	}
 	else
 	{
 		return false;
 	}
 }
 
 
 int countword(const char string[])
 {
 	int i;
 	int wordcount = 0;
 	bool lf = true;
 	bool isalphabetic(const char c);
 	
 	for(i = 0; string[i] != '\0'; ++i)
 	{
 		if(isalphabetic(string[i]))
 		{
 			if(lf)
 			{
 				++wordcount;
 				lf = false;
 			}
 		}
 		else
 			lf = true;
 		
 	}
 
 		return wordcount;
 }
 
 int main(void)
 {
 	const char t1[] = "anna univer`sity 123";
 	const char t2[] = "indian institute of information technology1 234";
 	int countword(const char string[]);
 	
 	printf("%s - words = %i\n", t1, countword(t1));
 	printf("%s - words = %i\n", t2, countword(t2));
 	
 	return 0;
 }
