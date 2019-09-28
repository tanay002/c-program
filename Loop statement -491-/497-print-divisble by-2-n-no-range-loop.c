#include<stdio.h>
#include<conio.h>
void main()
{
    int i,end,start;
    printf("Enter start and end range to identify no divisble by 2:- ");
    scanf("%d %d",&start,&end);
for(i=start;i<=end;i++)
{
if(i%2==0)
{
printf("%d\n",i);
}
}
getch();
}