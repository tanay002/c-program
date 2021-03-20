#include<stdio.h>
#include<conio.h>
void main()
{
//clrscr();
printf("%-4.1s%4.1s\n","****","****");
printf("%-4.2s%4.2s\n","****","****");
printf("%-4.3s%4.3s\n","****","****");
printf("%-4.4s%4.4s\n","****","****");
printf("\n");
printf("One extra star in last line,not correct\n");
printf("\n");

printf("%-4.1s\b%4.1s\n","****","****");
printf("%-4.2s\b%4.2s\n","****","****");
printf("%-4.3s\b%4.3s\n","****","****");
printf("%-4.4s\b%4.4s\n","****","****");
printf("\n");
printf("no extra star in last line,correct");
getch();
}
