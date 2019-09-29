#include<stdio.h>
#include<conio.h>
void main()
{
int tn,num,min,max,x;
printf("Enter total no to be inserted:- ");
scanf("%d",&tn);
 printf("Enter no:-");
    scanf("%d",&x);
    min=max=x;
for(int i=1;i<tn;i++)
{  
    printf("Enter no:-");
    scanf("%d",&x);
    if(x<min)
    min=x;
   if(x>max)
   max=x;
}
printf("Greatest no is %d and Smallest is %d ",max,min);
    getch();
}