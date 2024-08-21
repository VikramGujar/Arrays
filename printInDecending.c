// Write a C program to Sort the array in descending order and print it.
// Input as :
// Enter array size : 6

// Enter 6 element : 4 3 5 6 2 1
// Output as :

// After sorting in ascending order :

// 6 5 4 3 2 1
// ======================


#include<stdio.h>
int main()
{
    int num[10],arrNum,temp,i;
    printf("Enter size of array between 1-10 :");
    scanf("%d",&arrNum);

    printf("Enter array element",arrNum);
    for(i=0;i<arrNum;i++)
    {
        scanf("%d",&num[i]);
    }
     printf("\nArray element in Decending order :");
    for(i=0;i<=arrNum-2;i++)
    {
        for(int j=i+1;j<=arrNum-1;j++)
        if(num[i]<num[j])
        {
            temp=num[i];
            num[j]=num[i];
            num[i]=temp;
        }

    }
    for(i=0;i<arrNum;i++)
    {
        printf("%4d",num[i]);
    }
}