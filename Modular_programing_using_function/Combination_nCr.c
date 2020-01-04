#include<stdio.h>
#include<conio.h>
void main()
{
    int no,r;
printf("Enter no and r: ");
scanf("%d %d",&no,&r);
int res=facto(no);
int r1=facto(r);
int nr=facto(no-r);
float resk=(float)res/(r1*nr);
printf("Result: %.2f",resk);
getch();
}

int facto(int no)
{
  int res=1; 
for(int i=1;i<=no;i++)
res=res*i;
return res;
}