#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    for(i=0;i<=4;i++)
    {
        printf("%4.*s\b%-4.*s\n",i,i,"****");
    }
    getch();
}
