// How to get the second max and second min of the array

#include<stdio.h>
int main()
{
    int num[10],arrNum,i,j,temp;
    printf("Enter array size 1-10 :");
    scanf("%d",&arrNum);
    if (arrNum>10 || arrNum<0)
    {
        printf("Invalid array size");
        return 0;
    }
    printf("Enter %d elements :\n",arrNum);
    for(i=0;i<arrNum;i++)
    {
        printf("Element %d : ",i);
        scanf("%d",&num[i]);
    }
    for(i=0;i<arrNum;i++)
    {
        for(j=i+1;j<arrNum;j++)
        {
            if(num[i]>num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("Sorted array elements : ");
    for(i=0;i<arrNum;i++)
    {
        printf("%3d",num[i]);
    }
    for(i=1;i<arrNum;i++)
    {
        if(num[i]>num[0])
        {
            printf("\n %d is the 2nd min",num[i]);
            break;
        }
    }
     for(i=arrNum-2;i>0;i--)
    {
        if(num[i]<num[arrNum])
        {
            printf("\n %d is the 2nd max",num[i]);
            break;
        }
    }
}