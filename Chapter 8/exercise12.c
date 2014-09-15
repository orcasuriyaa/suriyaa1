/* finding matrix transpose
   SuriyaaKumar G M, september 2014 */
 
 #include <stdio.h>
 
 int transpose(int a[10][10], int b[10][10])
 {
 	int i;
 	int j;
 	
 	for(i = 1; i <= 3; i++)
 	{
 		for(j = 1; j <= 2; j++)
 		{
 			b[j][i] = a[i][j];
 		}
 	}
 	for(j = 1; j <= 2; j++)
 	{
 		printf("\n");
 		for(i = 1; i <= 3; i++)
 		{
 			printf("%i\t", b[j][i]);
 		}
 	}
 }
 
 int main(void)
 {
 	int a[10][10];
 	int b[10][10];
 	int i;
 	int j;
 	
 	printf("enter the array values(3x2)\n");
 	for(i = 1; i <= 3; i++)
 	{
 		for(j = 1; j <= 2; j++)
 		{
 			scanf("%i", &a[i][j]);
 		}
 	}
 	for(i = 1; i <= 3; i++)
 	{
 		printf("\n");
 		for(j = 1; j <= 2; j++)
 		{
 			printf("%i\t", a[i][j]);
 		}
 	}
 	transpose(a,b);
 	
 	return 0;
 }
