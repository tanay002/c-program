#include<stdio.h>
#include<conio.h>
void main()
{
    int no=0,result=0;
    int choice;
A: 
printf("Choice insert  1=Y/0=N  :-");
scanf("%d",&choice);
if(choice==1)
{
    printf("Enter no:-");
    scanf("%d",&no);
     result=result+no;
goto A;
}
else if(choice==0)
{
    printf("\nResult is %d",result);
}


     getch();
}