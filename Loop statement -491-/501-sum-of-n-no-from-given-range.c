#include<stdio.h>
#include<conio.h>
void main()
{
    int i,no,start,sum=0;
    printf("Enter starting no and ending no:- ");
    scanf("%d %d",&start,&no);
for(i=start;i<=no;i++)
{
    sum=sum+i;
}
printf("%d\n",sum);
getch();
}