#include<stdio.h>
#include<conio.h>
void main()
{
    int no;
    printf("Enter no:- ");
    scanf("%d",&no);
    for(int i=1;i<=no;i++)
    {
        for(int j=1;j<=no;j++)
        {
            if(i+j<=no/2+1||i-j>=no/2+1||j-i>=no/2+1||i+j>=3*(no/2+1))
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