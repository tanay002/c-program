#include<stdio.h>
#include<conio.h>
int square(int);

int square(int no)
{
return no*no;
}
void main()
{ 
    int no;
    printf("Enter number:-");
    scanf("%d",&no);
    int res=square(no); 
    printf("%d",res);
 getch();
}