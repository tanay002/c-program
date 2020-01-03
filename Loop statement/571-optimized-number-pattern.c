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
            if(i<j)
            {
                printf(" ");
            }
            else//
            {
                printf("%d",no-(i-j));
            }
            
        }
    
    printf("\n");
    }
    getch();
}