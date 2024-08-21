//  Sum of all elements
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
    int num[10], i,arrNum,sum;

    printf("Enter array size between 1-10: ");
    scanf("%d", &arrNum);

    printf("Enter %d elements\n", arrNum);
    for(i = 0; i < arrNum; i++) {
        printf("Element %d: ", i);
        scanf("%d", &num[i]);
        sum+=num[i];
    }
    printf("The sum of all array elements is :%d",sum);

}