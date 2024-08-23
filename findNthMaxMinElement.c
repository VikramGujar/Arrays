// How we can find the Nth max and min element in an array

#include<stdio.h>
int main()
{
    int num[10],arrNum,i,j,max,min,temp;
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
    printf("\n Enetr min and max positions you wanna find :");
    scanf("%d %d",&min,&max);
    for(i=1;i<arrNum;i++)
    {
        if(num[i]>num[i-1])
        min--;
        if(min==1)
        {
            printf("Min is : %d\n",num[i]);
            break;
        }
        
    }
    for(i=arrNum-2;i>0;i--)
    {
        if(num[i]<num[i+1])
        max--;
        if(max==1)
        {
            printf("Max is : %d",num[i]);
            break;
        }
        
    }
}