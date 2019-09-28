#include<stdio.h>
#include<conio.h>
void main()
{
    int i,x,no=0,sum=0;
while(sum<50)
{
    printf("Enter no:- ");
    scanf("%d",&x);
    if(sum+x<50)
    sum=sum+x;
    else
    break;    
}
printf("%d is rejected ,because it exceeds 50",x);
   printf("\nSum is %d",sum);   
     getch();
}