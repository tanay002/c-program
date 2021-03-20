#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
printf("%*.*s\n",4,1,"****");
printf("%*.*s\n",4,2,"****");
printf("%*.*s\n",4,3,"****");
printf("%*.*s\n",4,4,"****");
 //part 279

printf("%*.*s\n",4,1,"****");
printf("%-*.*s\n",4,2,"****");
printf("%*.*s\n",4,3,"****");
printf("%-*.*s\n",4,4,"****");
getch();
}