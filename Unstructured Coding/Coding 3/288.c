#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
//clrscr();
for(i=1;i<=7;i++)
printf("%4.*s\n",i<=4?i:8-i,"*******");
getch();
}
