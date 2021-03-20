#include<stdio.h>
#include<conio.h>
void main()
{
char pwd[5];
printf("Enter password\n");
pwd[0]=getch();
pwd[1]=getch();
pwd[2]=getch();
pwd[3]=getch();
pwd[4]='\0';
printf("Entered password is: %s",pwd);
getch();
}
