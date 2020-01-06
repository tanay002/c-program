#include<stdio.h>
#include<conio.h>
int countNo(int);

int countNo(int no)
{
int c=0;
while(no>0)
{
c++;
no=no/10;
countNo(no);
}
return c;
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