// How to print values of array and there addresess

#include<stdio.h>
int main()
{
    int num[5]={1,3,5,7,9};
    
    for(int i=0;i<5;i++)
    {
        printf("Value at num[%d] is :%d \t and address is : %u \n",i,num[i],&num[i]);
    }
}