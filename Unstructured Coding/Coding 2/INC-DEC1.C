#include<stdio.h>
#include<conio.h>
void main()
{
int x=1;
int y=x++ * ++x;
clrscr();
printf("%d %d",x,y);
getch();

}