#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,r,diff,fact=1,fact1=1,fact2=1;
    printf("Enter n and r:-");
    scanf("%d %d",&n,&r);
    diff=n-r;
     printf("%dC%d =%d!/(%d-%d)!*%d! \n",n,r,n,n,r,r);
     for(i=1;i<=n;i++)
     {
         fact=fact*i;
     }
     for(i=1;i<=diff;i++)
     {
         fact1=fact1*i;
     }
      for(i=1;i<=r;i++)
     {
         fact2=fact2*i;
     }
     printf("%dC%d is=%d/%d*%d",n,r,fact,fact1,fact2);
     printf("\nResult is %d",fact/(fact1*fact2));
     getch();
}