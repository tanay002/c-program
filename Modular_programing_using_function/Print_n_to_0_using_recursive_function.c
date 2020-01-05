#include<stdio.h>
#include<conio.h>
void m1(int n)
{
    printf("%d ",n);
    if(n>0)
    {
         m1(n-1);
    }
    
   
}
void main()
{ int no;
    printf("Enter number:- ");
    scanf("%d",&no);
    m1(no);
getch();
}