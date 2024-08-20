// How to raed and print the array

#include<stdio.h>
int main()
{
    int num[10],i,arrNum;
    printf("Enter how many elements you want to store between 1-10 :");
    scanf("%d",&arrNum);

    printf("Enter %d elements \n",arrNum);
    for(i=0;i<arrNum;i++)
    {
        printf("Element number %d is :",i);
        scanf("%d",&num[i]);
    }
    printf("Array elements are :");
    for(i=0;i<arrNum;i++)
    printf("%3d",num[i]);
}