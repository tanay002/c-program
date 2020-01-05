#include<stdio.h>
#include<conio.h>
int add();
int add(int no1,int no2)
{
return no1+no2;
}
void main()
{
    int n1,n2;
     printf("Enter two no:- ");
     scanf("%d %d",&n1,&n2);
     int r=add(n1,n2);
printf("\nOutput %d",r);
getch();
}