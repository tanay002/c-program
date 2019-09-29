#include<stdio.h>
#include<conio.h>
void main()
{
    int no,d,add_no=0;
    printf("Enter no:- ");
    scanf("%d",&no);
while(no)
{
    //d=no%10;
   // add_no=add_no+(d*d); or
add_no=add_no+(no%10)*(no%10); 
     no=no/10;
}
printf("%d\n",add_no);
getch();
}