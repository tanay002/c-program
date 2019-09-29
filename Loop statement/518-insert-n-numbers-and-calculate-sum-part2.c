#include<stdio.h>
#include<conio.h>
void main()
{
    int i,x,no=0,sum=0;
A: 
printf("Enter number of items:- ");
scanf("%d",&no);
for(i=1;i<=no;i++)
{
    printf("Enter no:- ");
    scanf("%d",&x);
    sum=sum+x;
}
printf("Sum is= %d",sum);
     getch();
}