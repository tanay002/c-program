#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,b,result=1;
    printf("Enter no and power:-");
    scanf("%d %d",&a,&b);
   if(b==0)
   {
       printf("%d^%d = 1",a,b);
   }
   else
   {
     for(i=1;i<=b;i++)
     {
         result=result*a;
     }
   }
     printf("\nResult is %d",result);
     getch();
}