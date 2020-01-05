#include<stdio.h>
#include<conio.h>
void m1(int n)
{
    if(n>0)
    {
        printf("%d ",n);
    }
    m1(n-1);
}
void main()
{ int no;
    printf("Enter number:- ");
    scanf("%d",&no);
    m1(no);
getch();
}