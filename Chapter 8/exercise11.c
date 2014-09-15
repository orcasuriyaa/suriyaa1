/* sum of elements in the array
 SuriyaaKumar G M<, September 2014 */
 
 #include <stdio.h>
 
 int sum(int a[10], int n)
 {
 	int i;
 	int sum = 0;
 	
 	for(i = 0; i < n; i++)
 	{
 		sum = sum + a[i];
 	}
 	printf("%i\n", sum);
 }
 
 int main(void)
 {
 	int a[20];
 	int n;
 	int i;
 	
 	printf("enter the number of elements in the array\n");
 	scanf("%i", &n);
 	
 	printf("enter the elements\n");
 	for(i = 0; i < n; i++)
 	{
 		scanf("%i", &a[i]);
 	}
 	sum(a, n);
 	
 	return 0;
 }
