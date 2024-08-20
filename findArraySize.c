// Find the size of the array

#include<stdio.h>
int main()
{
    int num[4]={1,2,3,4};
    printf("Number of bytes : %d \n",sizeof(num)); 
    // It will print Size 16 becouse integer takes 4 bytes and array is having 4 integer elements
    // in 64 byte compiler int take 4 bytes 
    // but in 32 byte compiler int take 2 bytes

    printf("Number of cells :%d \n",sizeof(num)/sizeof(int));

    printf("Number of cells :%d",sizeof(num)/sizeof(num[0]));
    // num [0] and num are equal

}