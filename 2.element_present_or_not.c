/*Write a program to accept an array of n elements and a number say key. Check whether key
is present in the array or not.
*/

#include<stdio.h>
int main()
{
	int arr[20],i,n,key,flag=0;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	 
	for(i=0;i<n;i++)
	{
	printf("Enter the %d element:",i);
	scanf("%d",&arr[i]);
	}
	 
	printf("Enter the key:");
	scanf("%d",&key);
	 

	 
	for(i=0;i<n;i++)
	{
	if(arr[i]==key)
	{
	flag=1;
	}
}
	 
	if(flag==1)
	{
	printf("Element is present in an array.");
	}
    else
	{
    printf("Not found.");
	}

	 
}
