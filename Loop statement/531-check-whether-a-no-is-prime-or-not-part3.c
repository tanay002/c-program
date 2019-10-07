#include<stdio.h>
#include<conio.h>
void main()
{  int count=0,no;
    printf("Enter no:-");
    scanf("%d",&no);
        for(int j=1;j<=no;j++)
        {
            if(no%j==0)
            {
                count++;
            }
        }
        if(count==2)
            printf("%d is Prime No\n",no);
        else
             printf("%d is Not Prime No\n",no);
getch();
}