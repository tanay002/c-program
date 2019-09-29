#include<stdio.h>
#include<conio.h>
void main()
{
int tn,fl,sl,x;
printf("Enter total no to be inserted:- ");
scanf("%d",&tn);
 printf("Enter no:-");
    scanf("%d",&x);
    fl=sl=x;
for(int i=1;i<tn;i++)
{  
    printf("Enter no:-");
    scanf("%d",&x);
    if(i==1&&x<fl)
    {   
   sl=x;
    }
   else if(x>fl)
  {
       sl=fl;
   fl=x;
  }
  else if(x>sl)
  sl=x;
}
printf("First largest no is %d and Second Largest is %d ",fl,sl);
    getch();
}