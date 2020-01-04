#include<stdio.h>
#include<conio.h>
void main()
{
    int no;
printf("Enter no: ");
scanf("%d",&no);
int res=fact(no);
printf("Result: %d",res);
getch();
}

int fact(int no)
{
  int res=1; 
for(int i=1;i<=no;i++)
res=res*i;
return res;
}