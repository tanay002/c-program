#include<stdio.h>
#include<conio.h>
int count=0;
int checkPrime(int);
int checkPrime(int no)
{ 
for(int i=1;i<=no;i++)
{
if(no%i==0)
{
count++;
}
}
return count;
}
void main()
{ 
    int p,no;
    printf("Enter no:- ");
    scanf("%d",&no);
    int c=checkPrime(no); 
   if(c==2)
   printf("\n%d is Prime No",no);
   else
   printf("\n%d is not Prime No",no);
 getch();
}