#include<stdio.h>
#include<conio.h>
void main()
{
    int i,range;
    printf("Enter range:- ");
    scanf("%d",&range);
for(i=1;i<=range;i++)
{
if(i%2==0)
{
printf("%d\n",i);
}
}
getch();
}