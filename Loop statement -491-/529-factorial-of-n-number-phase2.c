#include<stdio.h>
#include<conio.h>
void main()
{
    int no,res=1;
printf("Enter n no for factorial:- ");
scanf("%d",&no);
for(int i=1;i<=no;i++)
{
res=res*i;
}
printf("Factorial of %d is %d",no,res);
getch();
}