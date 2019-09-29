#include<stdio.h>
#include<conio.h>
void main()
{
    int i,end;
    printf("Enter end range to identify no divisible by 3 and 5:- ");
    scanf("%d",&end);
for(i=1;i<=end;i++)
{
if(i%3==0&&i%5==0)
{
printf("%d\n",i);
}
}
getch();
}