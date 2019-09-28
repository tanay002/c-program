#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a=0,b=1,c=0,no;
    printf("Enter number of series:- ");
    scanf("%d",&no);
for(i=1;c<no;i++)
{ 
  a=b;
  b=c;
  c=a+b;
}
if(c==no)
{
  printf("Yes,found at %d",i);
}
else
{
  printf("Not");
}
getch();
}