#include<stdio.h>
#include<conio.h>
void main()
{
    int i,f=0,s=1,no=1,sum=1;
    printf("Enter number of series");
    scanf("%d",&no);
    printf("%d %d",f,s);
for(i=1;i<=no;i++)
{ 
    sum=f+s;
   f=s;
    s=sum;
    printf(" %d",sum);
}
getch();
}