/*1. Write a program to accept n numbers in an array and display the largest and smallest
number. Using these values, calculate the range of elements in the array.
*/


#include<stdio.h>
int main()
{
	int arr[50],n,i,small,large;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
	printf("Enter the %d elements in the array:",i);
	scanf("%d",&arr[i]);
	}
	

	printf("Display the values:\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=%d\t",i,arr[i]);
	}
	
	small = arr[0];//Assume first element is smallest
    large = arr[0];//Assume first element is largest
    //iterate through the array
    for (i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    
    printf("Smallest element is : %d\n", small);
    printf("Largest element is : %d\n", large);
    
    return 0;
}


	
	
	

