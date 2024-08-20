// Write a C program to Sort the array in Revers order and print it.


// Input as :

// Enter array size : 6

// Enter 6 element : 6 5 4 3 2 1


// Output as :

// Array in Revers order :

// 1 2 3 4 5 6


#include<stdio.h>
int main()
{
    int num[10],arrayNum,i;
    printf("Enter size of array between 1-10 :");
    scanf("%d",&arrayNum);

    printf("Enter array element");
    for(i=0;i<arrayNum;i++)
    {
        scanf("%d",&num[i]);
    }
     printf("\n Revers array element are :");
    for(i=arrayNum-1;i>=0;i--)
    {
        printf("\n %d",num[i]);
    }
}