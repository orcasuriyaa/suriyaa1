/* program to determine the matching strings
 SuriyaaKumar G M, september 2014 */
 
 #include <stdio.h>
 #include <string.h>
 
 int main(void)
 {
 	char original[50];
 	char test[50];
 	int position;
 	int match(char original[], char test[]);
 	
 	printf("enter the string \n");
 	scanf("%s", &original);
 	
 	printf("enter the test string\n");
 	scanf("%s", &test);
 	
 	printf("your entry original = %s\n test = %s\n", original, test);
 	
 	position = match(original, test);
 	
 	if(position != -1)
 	{
 		printf("string found at %i\n", position + 1);
 	}
 	else
 	{
 		printf("element not found\n");
 	}
 	
 	return 0;
 }
 
 int match(char original[], char test[])
 {
 	int originallen;
 	int testlen;
 	int a, b, c;
 	int position = -1;
 	
 	originallen = strlen(original);
 	testlen = strlen(test);
 	
 	if(testlen > originallen)
 	{
 		return -1;
 	}
 	
 	for(a = 0; a <= originallen - testlen; a++)
 	{
 		position = b = a;
 		
 		for(c = 0; c < testlen; c++)
 		{
 			if(test[c] == original[b])
 			{
 				b++;
 			}
 			else{
 				break;
 			}
 		}
 		if(c == testlen)
 		{
 			return position;
 		}
 	}
 }
 
