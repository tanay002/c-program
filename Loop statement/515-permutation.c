#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,r,diff,fact=1,fact1=1;
    printf("Enter n and r:-");
    scanf("%d %d",&n,&r);
    diff=n-r;
     for(i=1;i<=n;i++)
     {
         fact=fact*i;
     }
     for(i=1;i<=diff;i++)
     {
         fact1=fact1*i;
     }
     printf("%dP%d is=%d/%d",n,r,fact,fact1);
     printf("\nResult is %d",fact/fact1);
     getch();
}