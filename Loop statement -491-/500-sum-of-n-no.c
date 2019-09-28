#include<stdio.h>
#include<conio.h>
void main()
{
    int i,no,sum=0;
    printf("Enter no:- ");
    scanf("%d",&no);
for(i=1;i<=no;i++)
{
    sum=sum+i;
}
printf("%d\n",sum);
getch();
}