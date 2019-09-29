#include<stdio.h>
#include<conio.h>
void main()
{
int no,res=1,d,temp,count=0,dcount,fk=0,start,end,val;
printf("Enter no start and end of range to find all armstrong:- ");
scanf("%d %d",&start,&end);
for(int i=start;i<=end;i++)
{
  val=i;
temp=i;  //bakup no
  while(val>0)
  {
    val=val/10;
    count++;   //count to check total no
  }
  val=temp;  //restore no from copy dummyvalue
  while(val>0)
  {  
    dcount=count;  //backup of count;
    d=val%10;
      while(count!=0)
        { 
      res=res*d;
      count--;
        }
    count=dcount;  //reset count to orginal from dummycount
    fk=fk+res;
    res=1;
    val=val/10; 
  }
if(fk==temp)
   printf("No %d is armstrong no\n",temp);
   fk=0; count=0;
}
getch();
}