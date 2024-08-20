// How you can directly initialise the array at programming time

#include<stdio.h>
int main()
{
    int num[5]={1,2,3,4,5},i;

    printf("Array elements are : ");
    for(i=0;i<5;i++)
    printf("%3d",num[i]);
}