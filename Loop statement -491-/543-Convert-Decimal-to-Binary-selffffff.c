#include<stdio.h>
#include<conio.h>
void main()
{
int no,i=0; 
int num[20];
printf("Enter no:- ");
scanf("%d",&no);
while(no!=0)
{   if(no%2==0)
      {
          no=no/2;
             num[i]=0;
         //printf("%d",0);
      }
      else
      {        
          no=no/2;
            num[i]=1;
         // printf("%d",1);
      }
      i++;
}
for(int i=19;i>=0;i--)
{  if(num[i]==0||num[i]==1)
    printf("%d",num[i]);
}
getch();
}