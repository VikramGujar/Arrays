// Find out the elements of array are prime or the coposit number


#include<stdio.h>
int main()
{
    int num[10], i,arrNum,count;

    printf("Enter array size between 1-10: ");
    scanf("%d", &arrNum);

    printf("Enter %d elements\n", arrNum);
    for(i = 0; i < arrNum; i++) {
        printf("Element %d: ", i);
        scanf("%d", &num[i]);
    }
    for(i=0;i<arrNum;i++)
    {
        count=0;
        if(num[i]==1)printf("%d is Not a Prime and not Composit number\n",num[i]);
        else
        {
        for(int j=2;j<=num[i];j++)
        {
            if(num[i]%j==0)
            count++;
        }
        if(count==1)
        printf("%d is a Prime number\n",num[i]);
        else
        printf("%d is a Composit number\n",num[i]);
        }
    }
}