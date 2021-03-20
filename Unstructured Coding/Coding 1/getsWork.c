#include<stdio.h>
#include<conio.h>
void main()
{
char ch,a[10];
printf("Enter Characters or strings\n");
ch=getchar(); //first character is store in "ch" from
//buffer/stdin and pointer move to next buffer index and
//then all remaining character store in a[10] array...until
//array size overflows
gets(a);
printf("%c %s",ch,a);
getch();
}
