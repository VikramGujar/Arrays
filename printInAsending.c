// Write a C program to Sort the array in ascending order and print it.


// Input as :

// Enter array size : 6

// Enter 6 element : 4 3 5 6 2 1


// Output as :

// After sorting in ascending order :

// 1 2 3 4 5 6

#include<stdio.h>
int main()
{
    int num[10],arrSiz,i,temp;
    puts("Enetr size of the array :");
    scanf("%d",&arrSiz);
    printf("Enetr %d elements :\n",arrSiz);
    for(i=0;i<arrSiz;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Array Elements are :\n ");
    for(i=0;i<arrSiz;i++)
    {
        printf("%4d",num[i]);
    }
    printf("\n After sorting in ascending order :\n ");
    for(i=0;i<=arrSiz-2;i++)
    {
        for(int j=i+1;j<=arrSiz-1;j++)
        if(num[i]>num[j])
        {
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
        }
    }
    for(i=0;i<arrSiz;i++)
    {
        printf("%4d",num[i]);
    }

}