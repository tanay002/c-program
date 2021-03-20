#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
//clrscr();
for(i=1;i<=4;i++)
printf("%*.*s\n",8-i,9-2*i,"*******");
getch();
}
