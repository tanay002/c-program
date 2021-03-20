#include<stdio.h>
#include<conio.h>
void main()
{
    char p,q,r;
    clrscr();
   printf("Enter 1st char\n");
    p=getchar();
     printf("Enter 2nd char\n");
    q=getchar();
    fflush(stdin);
     printf("Enter 3rd char\n");
    r=getchar();
     printf("%c %c %c",p,q,r);
    getch();
}