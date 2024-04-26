/*4. Write a program to accept n numbers from the user and store them in an array. Then sort the
array in descending order and display it.*/

#include <stdio.h>
void main ()
{
   int num[50];
   int i, j, a, n;
   
	 
	printf("Enter the size of an array:");
	scanf("%d",&n);
	 
	for(i=0;i<n;i++)
	{
	printf("Enter the %d element:",i);
	scanf("%d",&num[i]);
	}

   for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (num[i] < num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in descending order is\n:");
   for (i = 0; i < n; ++i)
   {
   printf("%d", num[i]);
   }
}
