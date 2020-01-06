#include<stdio.h>
#include<conio.h>
exit();
int res=1;
int fac(int);
int fac(int no)
{
if(no>0)
{
res=res*no;
fac(no-1);
}
return res;
}
void main()
{
    int rk,ch,no,r;
    float rs1;
    while(1)
    {
     clrscr();
     printf("\n\tEnter Choice:-\n1: Factorial \n 2:Permutaion \n 3:Combination \n 4:Exit\n");
     scanf("%d",&ch);
     res=1;
    switch(ch)
    {
         case 1:        
                    printf("Enter no:- ");
                    scanf("%d",&no);
                    rk=fac(no);
                    printf("\nResult is %d",rk);
                    break;
          case 2:
                    printf("\nEnter no and r:- ");
                    scanf("%d %d",&no,&r);
                    int num=fac(no);
                    res=1;
                     int den=fac(no-r);
                     res=1;
                   float resk1=(float)num/den;
                    printf("\nResult is %.2f",resk1);
                    break;
          case 3: 
                    printf("\nEnter no and r:- ");
                    scanf("%d %d",&no,&r);
                    int numk=fac(no);
                    res=1;
                   int denk=fac(r);   res=1;
                int den11=fac(no-r);
                 res=1;
                   float resk=(float)numk/(denk*den11);
                    printf("\nResult is %.2f",resk);
                    break;
          case 4: exit(1);
          default: printf("Invalid Choice! Retry-");
          break;
    }
    
    }
getch();
}