#include<stdio.h>
#include<conio.h>
void main()
{
    int no,last,sum;
    printf("Enter no:- ");
    scanf("%d",&no);
    last=no%10;
while(no>10)
    no=no/10;
sum=last+no;
printf("%d\n",sum);
getch();
}