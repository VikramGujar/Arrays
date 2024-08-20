// Write a program in C to insert New value in the array (sorted array ) at its proper respective position as its accending order.

 

// Test Data : 

// Input the size of array : 5 


// Input 5 elements in the array : 

// element - 0 : 1 

// element - 1 : 3 

// element - 2 : 7

// element - 3 : 8

// element - 4 : 10

// Input the value to be inserted : 6


// Expected Output : 

// The current list of the array : 

// 1 3 7 8 10


// After Insert the element the new list is : 

// 1 3 6 7 8 10


#include<stdio.h>
int main()
{
    int num[10],arrSiz,count,i,j,insert;
    puts("Enter the size of array :");
    scanf("%d",&arrSiz);

    printf("Enter %d elements :\n",arrSiz);
    for(i=0;i<arrSiz;i++)
    {
        printf("Enter %d element :",i+1);
        scanf("%d",&num[i]);
    }
    printf("The current list of the array :\n");
    for(i=0;i<arrSiz;i++)
    {
        printf("%d",num[i]);
    }
    printf("Input the value to be inserted :\n");
    scanf("%d",&insert);
    printf("After Insert the element the new list is : \n");
    for(i=0;i<arrSiz;i++)
    {
        if(num[i]<insert)
        {
            num[i+1]=insert;
        }
    }
}