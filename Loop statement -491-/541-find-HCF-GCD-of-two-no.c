#include<stdio.h>
#include<conio.h>
void main()
{
int no1,no2,val;
printf("Enter two no:- ");
scanf("%d %d",&no1,&no2);
val=no1<no2?no1:no2;
   printf("Common HCF/GCD of no %d and %d are:- ",no1,no2);
for(int i=1;i<=val;i++)
{

if((no1%i==0)&&(no2%i==0))
{
   printf("%d ",i);
}
}
getch();
}