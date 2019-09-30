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
            if(i+j>no+1)
            {
                printf(" ");
            }
            else
            {
                printf("%d",(no+2)-(i+j));
            }
            
        }
    
    printf("\n");
    }
    getch();
}