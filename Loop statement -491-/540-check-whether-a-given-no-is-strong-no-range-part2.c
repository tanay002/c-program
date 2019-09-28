#include<stdio.h>  //Strong no means 145=1!+4!+5! is equal to same no;
#include<conio.h>
void main()
{
    long no,temp,fact=1,d, res=0,  count=0,end,dummy;
printf("Enter start and end:-");
scanf("%d %d",&no,&end);
for(int k=no;k<=end;k++)
{
    temp=k;
    dummy=k;
while(dummy>0)
{
    count++;
    dummy=dummy/10;
}
dummy=temp;
for(int i=1;i<=count;i++)
{
while(dummy>0) 
{    
    d=dummy%10;
    dummy=dummy/10;
      for(int j=1;j<=d;j++)
      {
          fact=fact*j;
          
      }
      res=res+fact;
      fact=1;
}
}
if(temp==res)  //check karenge jitne bh divisible no ka sum hai wo main no hai kya ,if yes
    printf("%d is Strong Number\n",temp);//it is perfect square
    res=0;
    count=0;

}
    getch();
}