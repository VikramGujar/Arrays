// Print half elements in asending order and half elements in decending order

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
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for(i=0;i<arrNum/2;i++)
    {
        printf("%2d",num[i]);
    }
    
    for(i=arrNum-1;i>=arrNum/2;i--)
    {
        printf("%2d",num[i]);
    }

}