#include<stdio.h>
#include<conio.h>
void main()
{
    int no,d,add_no=0;
    printf("Enter no:- ");
    scanf("%d",&no);
while(no)
{
    d=no%10;
    no=no/10;
    add_no=add_no+d;
}
printf("%d\n",add_no);
getch();
}