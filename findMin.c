// How to find the minimum nuber in an array element

#include<stdio.h>
int main()
{
    int num[10],i,min,arrNum;
    printf("Enter array size between 1-10 :");
    scanf("%d",&arrNum);
    printf("Enter %d elements \n",arrNum);
    for(i=0;i<arrNum;i++)
    {
        printf("Element %d :",i);
        scanf("%d",&num[i]);
    }
    min=num[0];
    for(i=1;i<arrNum;i++)
    {
        if(min>num[i])
        min=num[i];
    }
    printf("Min = %d",min);

}