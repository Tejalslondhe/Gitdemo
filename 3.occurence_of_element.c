/*3. Write a program to accept an integer array and an integer say num and counts the
occurrences of the num in the array.*/

#include<stdio.h>
int main()
{
	int arr[50],i,n,num,count;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	 
	for(i=0;i<n;i++)
	{
	 	printf("Enter the %d element:",i);
	 	scanf("%d",&arr[i]);
	}
	 
	printf("Enter number to find Occurrence: ");
    scanf("%d", &num);

    //count occurance of num
    count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == num)
            count++;
    }
    printf("Occurrence of %d is: %d\n", num, count);
    return 0;
}
