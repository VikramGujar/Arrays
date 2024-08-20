// Write a program in C to count the frequency of each element of an array.

// Test Data :

// Input the number of elements to be stored in the array :6

// Input 6 elements in the array :

// element - 0 : 25

// element - 1 : 12

// element - 2 : 43

// element - 3 : 43

// element - 4 : 25

// element - 5 : 15

// Expected Output :

// The frequency of all elements of an array :

// 25 occurs 2 times

// 12 occurs 1 times

// 43 occurs 2 times

// 15 occurs 1 times


#include<stdio.h>
int main()
{
    int num[10],arrSiz,count,i,j;
    puts("Enter the size of array :");
    scanf("%d",&arrSiz);

    printf("Enter %d elements :\n",arrSiz);
    for(i=0;i<arrSiz;i++)
    {
        printf("Enter %d element :",i+1);
        scanf("%d",&num[i]);
    }
    printf("The frequency of all elements of an array :\n");
    for(i=0;i<arrSiz;i++)
    {
        count=0;
        for(j=0;j<arrSiz;j++)
        {
            if(num[i]==num[j])
            {
                count++;
            }
            
        }
        
        printf("%d occurs %d times \n",num[i],count);
    }
}