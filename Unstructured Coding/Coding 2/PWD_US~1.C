#include<stdio.h>
#include<conio.h>
void main()
{   int i;
char pwd[5];
clrscr();
printf("Enter four digit password\n");
for(i=0;i<4;i++)
{
pwd[i]=getch();
//printf("\n%c \t %d",pwd[i],i);
}
pwd[4]='\0';
printf("\nEntered password is: %s",pwd);
getch();
}
