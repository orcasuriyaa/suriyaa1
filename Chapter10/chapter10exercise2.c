/* function to determine if two strings are equal
  Suriyaa Kumar G M, september 2014 */
 
 #include <stdio.h>
 #include <stdbool.h>
 
 bool stringeq(const char s1[], const char s2[] )
 {
 	int i = 0;
 	bool areequal;
 	
 	while(s1[i] == s2[i] && s1[i] != '\0')
	 {
	 	i++;
	 } 
	 
	if(s1[i] == '\0' && s2[i] == '\0')
	{
		areequal = true;
	}
	else
	{
		areequal = false;
	}
	
	return areequal;
 }
 
 int main(void)
 {
 	bool stringeq(const char s1[], const char s2[] );
 	char const s1[] = "compare string";
 	char const s2[] = "string";
 	
 	printf("%i\n", stringeq(s1, s2));
 	printf("%i\n", stringeq(s2, s2));
 	printf("%i\n", stringeq(s1, "compare string"));
 	
 	return 0;
 }
