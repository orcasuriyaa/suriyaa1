/* fibonacci without array
 SuriyaaKumar G M, Sep9 2014 */
 
 #include <stdio.h>
 
 int main(void)
 {
 	int a = 0;
 	int b = 1;
 	int c;
 	int i;
 	
 	printf("%i\n%i\n", a, b);
 	for(i = 1; i <= 15; i++)
 	{
 		c = a + b;
 		printf("%i\n", c);
 		a = b;
 		b = c;
 	}
 }
