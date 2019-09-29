#include<stdio.h>
#include<conio.h>
void main()
{
    int no,i;
    printf("Enter no:- ");
    scanf("%d",&no);
    for(i=1;i<=10;i++)
      {
          printf("\n%d*%d=%d",no,i,i*no);
      }
      getch();
}
