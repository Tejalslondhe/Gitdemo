/*6. Program to print all even numbers in array.*/

#include<stdio.h>
int main()
{
	int arr[50],i,n;
	
	printf("Enter the size of an array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the element %d:",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Display the values:\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=%d\t",i,arr[i]);
	}
		
	printf("\nThe even numbers are:");
	for(i=0;i<n;i++)
	{
	if(arr[i]%2==0)
	{
		printf("%d\n",arr[i]);
	}
	
}

}
