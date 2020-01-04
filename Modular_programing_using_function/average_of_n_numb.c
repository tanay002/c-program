#include<stdio.h>
#include<conio.h>
void main()
{ 
    int res=0;
    int no;
    int numb;
  
printf("Enter no: ");
scanf("%d",&no);
  
for(int i=0;i<no;i++)
{
    scanf("%d",&numb);
    int k=totall(numb,res);
            res=k;
}
printf("%.2f",(float)res/no);
getch();
}

int totall(int no,int res)
{
 res=res+no;
return res;
}
/*
float avg(int res,int no)
{
float resk=(float)res/no;
return resk;
}
*/