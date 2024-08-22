// Read the id,name, six subject mark of student and then print total mark Pass/Fail and grade

#include<stdio.h>
int main()
{
    int id,mark[6],total=0,pass=1,i;
    float avg;
    char name[10];
    printf("Enter your id :");
    scanf("%d",&id);
    printf("Enter your name :");
    scanf("%s",&name);

    for(i=0;i<6;i++)
    {
        printf("Enter marks of sub %d :",i+1);
        scanf("%d",&mark[i]);
        total+=mark[i];
        if(mark[i]<35)
        pass=0;
    }
    avg=total/6;
    printf("Id\tName\tTot\tAvg\tGrade \n");
    printf("------------------------------------\n");
    printf("%d\t%s\t%d\t%.2f\t",id,name,total,avg);
    if(pass==0)
    printf("Fail");
    else if(total/6>80)
    printf("1st Class");
    else if(total/6>60 && total/6<80 )
    printf("2nd Class");
    else
    printf("3rd Class");
}