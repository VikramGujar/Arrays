//  Display Array in Reverse Order
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
// method of actual swaping and reversing the array


#include<stdio.h>
int main()
{
    int num[10], i,arrNum,temp;

    printf("Enter array size between 1-10: ");
    scanf("%d", &arrNum);

    printf("Enter %d elements\n", arrNum);
    for(i = 0; i < arrNum; i++) {
        printf("Element %d: ", i);
        scanf("%d", &num[i]);
    }
    for(i=0;i<arrNum/2;i++)
    {
        temp=num[i];
        num[i]=num[arrNum-i-1];
        num[arrNum-i-1]=temp;
    }
    printf("The revers array is :");
    for(i=0;i<arrNum;i++)
    {
        printf("%4d",num[i]);
    }
}