#include<stdio.h>
#include<conio.h>
int countNo(int);

int countNo(int no)
{
int res=0;
while(no>0)
{

res=res+no%10;
no=no/10;
countNo(no);
}
return res;
}
void main()
{ 
    int no;
    printf("Enter number:-");
    scanf("%d",&no);
    int res=countNo(no);
 printf("Count numbered is %d",res);
 getch();
}