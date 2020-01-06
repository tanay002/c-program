#include<stdio.h>
#include<conio.h>
char *checkNo(int);

char *checkNo(int no)
{
if(no%2==0)
    return "even";
else
return "odd";
}
void main()
{ 
    int no;
    printf("Enter number:-");
    scanf("%d",&no);
    char *res=checkNo(no); 
    printf("%s",res);
 getch();
}