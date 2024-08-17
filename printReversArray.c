//  Display Array in Reverse Order
// 1 point

// Write a program in C to read n number of values in an array and display it in reverse order.

// Input the number of elements to store in the array :3

// Input 3 number of elements in the array :

// element - 0 : 2

// element - 1 : 5

// element - 2 : 7

// Expected Output :

// The values store into the array are :

// 2 5 7

// The values store into the array in reverse are :

// 7 5 2

#include<stdio.h>
int main()
{
    int num[10],eleNum,count;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&eleNum);

    printf("\n Enter elements :");
    for(int i=0;i<eleNum;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\n Revers array elements are :");
    for(int i=eleNum-1;i>=0;i--)
    {
        printf("%4d",num[i]);
    }

}