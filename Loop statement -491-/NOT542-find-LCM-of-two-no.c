#include<stdio.h>
#include<conio.h>
void main()
{
int no1,no2,total=1,val,i;
printf("Enter two no:- ");
scanf("%d %d",&no1,&no2);
val=no1>no2?no1:no2;
   //printf("Common HCF/GCD of no %d and %d are:- ",no1,no2);
A:
for(i=2;i<=val;i++)
{

if(no1%i==0)
{  
    if(no2%i==0)
    {
        no2=no2/i;
        no1=no1/i;
     total=total*i;
     i--;
    }
    else
    {
        no1=no1/i;
     total=total*i;
     i--;
    }
}
}

if(i==val)
{
    i=2;
    goto A;
}
else
{
    printf("LCM is:- %d",total);
}

getch();
}