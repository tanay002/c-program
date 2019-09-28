#include<stdio.h>  //perfect no means 6=2+3+1;
#include<conio.h>
void main()
{
    int no,temp,fact=1,d, res=0,  count=0;
printf("Enter no:-");
scanf("%d",&no);
temp=no;
while(no>0)
{
    count++;
    no=no/10;
}
no=temp;
for(int i=1;i<=count;i++)
{
while(no>0) 
{    
    d=no%10;
    no=no/10;
      for(int j=1;j<=d;j++)
      {
          fact=fact*j;
          
      }
      res=res+fact;
      fact=1;
}
}
if(temp==res)  //check karenge jitne bh divisible no ka sum hai wo main no hai kya ,if yes
    printf("%d is Strong Number",temp);//it is perfect square
else
    printf("%d is not Strong Number",temp);
    getch();
}