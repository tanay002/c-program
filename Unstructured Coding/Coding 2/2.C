#include<stdio.h>
#include<conio.h>
void main()
{ int x,y,result=0;
	clrscr();
	printf("Enter two no \n");
     scanf("%d %d",&x,&y);
     result=x+y;
     printf("Add: %d",result);
     getch();
     clrscr();
     result=x-y;
     printf("Sub: %d",result);
	      getch();

}