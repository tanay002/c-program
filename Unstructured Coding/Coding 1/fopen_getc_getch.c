#include<stdio.h>
#include<conio.h>
void main()
{
	FILE* fin=fopen("C:\temp\a.txt","r");
	 char p,q,r,s,t;
clrsrc();
	   p=getc(stdin);
	       q=getc(fin);
                r=getchar();
                s=getc(fin);
                t=getc(stdin);
printf("%c %c %c %c %c",p,q,r,s,t);
getch();
}
