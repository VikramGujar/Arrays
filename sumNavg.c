// Accept array size from user 
// Calculate the sum of the array elements
// Calculate the average of sum of the element

#include<stdio.h>
int main()
{
    int num[10],arrNum,sum=0,avg=0,i;
    printf("Enetr the array size between 1 to 10 :");
    scanf("%d",&arrNum);

    if(arrNum<1 || arrNum>10)
    {
        printf("Invalid Size!!! [Enter array size between 1 to 10 plz] ");
        return 0;
    }

    printf("Enter %d array elements\n",arrNum);
    for(i=0;i<arrNum;i++)
    {
        printf("Array element %d :",i);
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    printf("Array element SUM = %d \t Average = %d",sum,sum/arrNum);


}