#include<stdio.h>
#include<conio.h>
void main()
{  int count=0;
    for(int i=2;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d\n",i);
            count=0;
        }
        else
            count=0; 
    }
getch();
}