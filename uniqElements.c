// Write a program in C to print all unique elements in an array. 

// Test Data :

// Print all unique elements of an array:

// ------------------------------------------

// Input the number of elements to be stored in the array: 4

// Input 4 elements in the array :

// element - 0 : 3

// element - 1 : 2

// element - 2 : 2

// element - 3 : 5

// Expected Output :

// The unique elements found in the array are:

// 3 5


#include<stdio.h>
int main()
{
    int num[10],arrSiz,count,i,j;
    puts("Enter the size of array :");
    scanf("%d",&arrSiz);

    printf("Enter %d elements :\n",arrSiz);
    for(i=0;i<arrSiz;i++)
    {
        printf("Enter %d element :",i+1);
        scanf("%d",&num[i]);
    }
    printf("The unique elements found in the array are :\n");
    for(i=0;i<arrSiz;i++)
    {
        count=0;
        for(j=0;j<arrSiz;j++)
        {
            if(num[i]==num[j] && i!=j)
            {
                count++;
                break;
            }
            
        }
        if(count==0)
        printf("%3d",num[i]);
    }
}