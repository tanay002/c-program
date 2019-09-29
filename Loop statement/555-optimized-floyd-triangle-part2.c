#include<stdio.h>
#include<conio.h>
void main()
{
    int no;
    printf("Enter no:- ");
    scanf("%d",&no);
    for(int i=1;i<=no;i++)
    {
        for(int j=1;j<=2*no-1;j++)
        {
            if(i>j||i+j>2*no)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
            
        }
    
    printf("\n");
    }
    getch();
}