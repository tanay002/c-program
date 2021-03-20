#include<stdio.h>
#include<conio.h>
void main()
{

int x=1,y;
clrscr();
y=x++ * ++x;
printf("%d %d",x,y);
getch();

}