// Write a C program to find the element given by user is present in the 
// array or not 
// If the element is present in the array also programmer have to print 

// index position of that searching element.

// If the user pass the element for searching in the array is not present

// then also provide a appropriate message to the user that element is not 

// present inside the array.
// Input 1:-

// [1,2,3,4,5,6,7]


// Enter the number you want to search : 5


// Output :-


// The element which you have sreached is present inside the 4rth index 


// Input 2:-

// [1,2,3,4,3,6]


// Enter the number you want to search : 9


// Output :


// The element which you have sreached is not present inside the Array.

#include<stdio.h>
int main()
{
    int num[10],arrNum,i,search,sCount;
    printf("Enter array size between 1-10 :");
    scanf("%d",&arrNum);

    if(arrNum>10 || arrNum<0)
    {
        printf("Invalid array size, give 1-10 plz ");
        return 0;
    }

    for(i=0;i<arrNum;i++)
    {
        printf("%d Element :",i);
        scanf("%d",&num[i]);
    }

    printf("Which number you want to search :");
    scanf("%d",&search);

    for(sCount=i=0;i<arrNum;i++)
    {
        if(num[i]==search)
        {
            sCount++;
            printf("The number %d is present at %d position \n",search,i);
        }
    }
    if(sCount==0)
    printf("%d is not present in an array",search);
}