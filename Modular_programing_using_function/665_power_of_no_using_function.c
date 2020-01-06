#include<stdio.h>
#include<conio.h>
int powerNo(int,int);
int res=1;
int powerNo(int no,int p)
{ 
if(p>0)
{
    res=res*no;
    powerNo(no,p-1);
}
return res;
}
void main()
{ 
    int p,no;
    printf("Enter no and power:-");
    scanf("%d %d",&no,&p);
    int res=powerNo(no,p); 
    printf("power of %d^%d is %d",no,p,res);
 getch();
}