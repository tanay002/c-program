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
            if(i+j<no+1||j-i>no-1)
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