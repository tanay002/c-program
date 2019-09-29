#include<stdio.h>
#include<conio.h>
void main()
{
    int no,d,rev=0;
    printf("Enter no:- ");
    scanf("%d",&no);
while(no)
{
    d=no%10;
    no=no/10;
    rev=rev*10+d;
}
printf("%d\n",rev);
getch();
}