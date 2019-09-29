#include<stdio.h>
#include<conio.h>
void main()
{
    int no,d,rev=0,temp;
    printf("Enter no:- ");
    scanf("%d",&no);
temp=no;
while(no)
{
    
    rev=rev*10+no%10;
    no=no/10;
}
if(temp==rev)
{
    printf("%d is palindrom",temp);
}
else
{
printf("%d is not palindrom",temp);
}
getch();
}