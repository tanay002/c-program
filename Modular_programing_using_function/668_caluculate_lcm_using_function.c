#include<stdio.h>
#include<conio.h>
int lcm(int,int);
int res=1;
int lcm(int no1,int no2)
{ int i;
int max=no1>no2?no1:no2;
    for(i=max;1;i=i+max)
    {
        if(i%no1==0&&i%no2==0)
        {
        break;
        }
    }
return i;
}
void main()
{ 
    int no1,no2;
    printf("Enter no1 and no2:-");
    scanf("%d %d",&no1,&no2);
    int res=lcm(no1,no2); 
    printf("lcm of %d and %d is %d",no1,no2,res);
 getch();
}