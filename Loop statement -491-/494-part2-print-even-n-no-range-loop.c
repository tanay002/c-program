#include<stdio.h>
#include<conio.h>
void main()
{
    int i,range;
    printf("Enter range:- ");
    scanf("%d",&range);
for(i=2;i<=range;i=i+2)
{
printf("%d\n",i);
}
getch();
}