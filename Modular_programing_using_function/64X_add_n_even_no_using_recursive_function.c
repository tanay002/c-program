#include<stdio.h>
#include<conio.h>
int res=0;
int m1(int n)
{  
 if(n%2==0&&n>0)
 {
     res=res+n;
    m1(n-1);
 }
 else if(n%2!=0&&n>0)
 {
     m1(n-1);
 }
 return res;
}
void main()
{ 
    int no;
    printf("Enter number:- ");
    scanf("%d",&no);
    int r=m1(no);
    printf("Sum of n even no is %d",r);
    getch();
}