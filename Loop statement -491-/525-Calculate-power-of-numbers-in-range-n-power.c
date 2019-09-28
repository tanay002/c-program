#include<stdio.h>
#include<conio.h>
void main()
{
    int start ,end,pow,resu,no;
printf("Enter start and end of range:-");
scanf("%d %d",&start,&end);
printf("enter power:-");
scanf("%d",&pow);
for(int i=start;i<=end;i++)
{  no=i,resu=1;
    for(int j=1;j<=pow;j++)
    {
   resu=no*resu;
    }
 printf("%d \n",resu);       
 //pow=temp;  
}
getch();
}