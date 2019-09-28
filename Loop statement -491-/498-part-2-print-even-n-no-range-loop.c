#include<stdio.h>
#include<conio.h>
void main()
{
    int i,end;
    printf("Enter end range to identify even no:- ");
    scanf("%d",&end);
for(i=1;i<=end;i++)
{
if(i%2==0)
{
printf("%d\n",i);
}
}
getch();
}