// Find the how many even odd and zero int the array

#include<stdio.h>
int main()
{
    int num[10],i,even=0,odd=0,zero=0,arrNum;
    printf("Enter array size between 1-10 :");
    scanf("%d",&arrNum);
    printf("Enter %d elements \n",arrNum);
    for(i=0;i<arrNum;i++)
    {
        printf("Element %d :",i);
        scanf("%d",&num[i]);
        if(num[i]==0)zero++;
        else if(num[i]%2==0)even++;
        else odd++;
    }
    printf("The array consist of Even-%d \t Odd-%d \t Zero-%d",even,odd,zero);
}