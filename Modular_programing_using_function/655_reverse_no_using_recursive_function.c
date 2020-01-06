#include<stdio.h>
#include<conio.h>
int rev(int);

int rev(int no)
{
int res=0;
while(no>0)
{
res=res*10+no%10;
no=no/10;
rev(no);
}
return res;
}
void main()
{ 
    int no;
    printf("Enter number:-");
    scanf("%d",&no);
    int res=rev(no);
 printf("Reverse number is %d",res);
 getch();
}