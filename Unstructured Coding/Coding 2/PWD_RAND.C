#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char pwd[5];
clrscr();
printf("Enter four digit password\n");
pwd[0]=getch();
printf("*");
pwd[1]=getch();
printf("*");
pwd[2]=getch();
printf("*");
pwd[3]=getch();
printf("*");
pwd[4]='\0';
printf("\nYour password is: %s",pwd);
getch();
}
