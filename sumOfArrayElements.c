//  Sum of all elements
// 1 point

// Write a program in C to find the sum of all elements of the array.

// Input the number of elements to be stored in the array :3

// Input 3 elements in the array :

// element - 0 : 2

// element - 1 : 5

// element - 2 : 8

// Expected Output :

// Sum of all elements stored in the array is : 15


#include<stdio.h>
int main()
{
    int num[10],eleNum,arraySum=0;
    printf("Input the number of elements to be stored in the array");
    scanf("%d",&eleNum);

    for(int i=0;i<eleNum;i++)
    {
        printf("\n Element %d :",i);
        scanf("%d",&num[i]);
        arraySum=arraySum+num[i];
    }
    printf("\n Sum of all elements stored in the array is : %d",arraySum);
}