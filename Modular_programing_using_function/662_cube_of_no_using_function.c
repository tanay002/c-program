#include<stdio.h>
#include<conio.h>
int cube(int);

int cube(int no)
{
return no*no*no;
}
void main()
{ 
    int no;
    printf("Enter number:-");
    scanf("%d",&no);
    int res=cube(no); 
    printf("%d",res);
 getch();
}