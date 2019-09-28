#include<stdio.h>
#include<conio.h>
void main()
{
    int num,no,counteven=0,countodd=0;
printf("Enter total no to be inserted:-");
scanf("%d",&no); 
printf("Enter no:-");
for(int i=1;i<=no;i++)
{ 
scanf("%d",&num);       
 if(num%2==0)
 {
     counteven++;
 }
 else if(num%2!=0)
 {
     countodd++;
 }
}
printf("Even no is %d \n Odd no is %d",counteven,countodd);
getch();
}