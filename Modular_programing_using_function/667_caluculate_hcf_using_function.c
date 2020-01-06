#include<stdio.h>
#include<conio.h>
int hcf(int,int);
int res=1;
int hcf(int no1,int no2)
{ 
int min=no1<no2?no1:no2;
    for(int i=2;i<=min;i++)
    {
        if(no1%i==0&&no2%i==0)
        {
        res=res*i;
        }
    }
return res;
}
void main()
{ 
    int no1,no2;
    printf("Enter no1 and no2:-");
    scanf("%d %d",&no1,&no2);
    int res=hcf(no1,no2); 
    printf("hcf of %d and %d is %d",no1,no2,res);
 getch();
}