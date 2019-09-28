#include<stdio.h>
#include<conio.h>
void main()
{
int no,i=0,nm,d,count=0; 
int num[20];
printf("Enter no:- ");
scanf("%d",&no);
while(no!=0)
{
    d=no%8;
    no=no/8;
    num[i]=d;
    i++;
}
i=0;
/*while(num[i]!=0)
{
  if(i!=20&&num[i]<=7)
  {
    count++;
    i++;
  }
i++;
}  */
for(int i=19;i>=0;i--)
{
   if(num[i]<=7&&num[i]>=0)
    printf("%d",num[i]);
}
//printf("Count is %d",count);
getch();
}