#include<stdio.h>
#include<conio.h>
void main()
{  //part 282
    //same pattern with differnt logics

 //clrscr();

printf("%4.4s\n","****");
printf("%4.3s\n","****");
printf("%4.2s\n","****");
printf("%4.1s\n","****");
printf("\n");

//or
printf("%4.*s\n",4,"****");
printf("%4.*s\n",3,"****");
printf("%4.*s\n",2,"****");
printf("%4.*s\n",1,"****");
printf("\n");
//or
int i;
for(i=4;i>=1;--i)
{
printf("%4.*s\n",i,"****");
}
printf("\n");
//or
for(i=1;i<=4;i++)
{
printf("%4.*s\n",5-i,"****");
}

getch();
}

