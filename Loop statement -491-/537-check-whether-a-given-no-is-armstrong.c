#include<stdio.h>
#include<conio.h>
void main()
{
int no,res=1,d,temp,count=0,dcount,fk=0;
printf("Enter no:-");
scanf("%d",&no);
temp=no;  //bakup no

while(no>0)
{
  no=no/10;
  count++;   //count to check total no
}
no=temp;  //restore no from copy dummyvalue
while(no>0)
{  
  dcount=count;  //backup of count;
  d=no%10;
  while(count!=0)
  {
    
  res=res*d;
  count--;
  }
  count=dcount;  //reset count to orginal from dummycount
  fk=fk+res;
  res=1;
  no=no/10;
}


if(fk==temp)
   printf("No %d is armstrong no",temp);
else
 printf("No %d is not armstrong no",temp);
getch();
}