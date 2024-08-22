// Arrange even elements in asending order and odd element in desending order



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
        if(num[i]%2==0)
        {
            for(j=i+1;j<arrNum;j++)
            {
                if(num[i]<num[j])
                {               
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
                }
            }
        }else
        {
            for(j=i+1;j<arrNum;j++)
            {
                if(num[i]<num[j])
                {               
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
                }
            }
        }
    }
    printf("Array after sort");
    for(i=0;i<arrNum;i++)
    {
        if(num[i]%2==0)
        printf("%2d",num[i]);
    }
    for(i=0;i<arrNum;i++)
    {
        if(num[i]%2!=0)
        printf("%2d",num[i]);
    }
}
