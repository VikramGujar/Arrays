//  print odd and even elements
// 1 point

// Write a program in C to print separately the  odd and even integers 

// Test Data :

// Input the number of elements to be stored in the array :5

// Input 5 elements in the array :

// element - 0 : 25

// element - 1 : 47

// element - 2 : 42

// element - 3 : 56

// element - 4 : 32

// Expected Output :

// The Even elements are :

// 42 56 32

// The Odd elements are :

// 25 47


#include<stdio.h>
int main()
{
    int num[10],eleNum;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&eleNum);

    for(int i=0;i<eleNum;i++)
    {
        printf("\n Element %d is :",i);
        scanf("%d",&num[i]);
    }
    printf("\n Even numbers :");
    for(int i=0;i<eleNum;i++)
    {
        if(num[i]%2==0)
        {
            printf("%d \t",num[i]);
        }
    }
    printf("\n Odd numbers :");
    for(int i=0;i<eleNum;i++)
    {
        if(num[i]%2!=0)
        {
            printf("%d \t",num[i]);
        }
    }
     
}