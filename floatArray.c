// How we can take float array from user int fix size of range

#include<stdio.h>
int main()
{
    float fnum[10];
    int arrNum,i;
    printf("Enetr array size between 1-10 :");
    scanf("%d",&arrNum);

    if(arrNum<1 || arrNum>10)
    {
        printf("Give size between 1-10 plz ");
        return 0;
    }
    
    printf("Enter %d array elements \n",arrNum);
    for(i=0;i<arrNum;i++)
    {
        printf("Element %d :",i);
        scanf("%f",&fnum[i]);
    }
    printf("Array elements are :");
    for(i=0;i<arrNum;i++)
    {
        printf("%10.2f",fnum[i]);
    }
}