#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Insert Range a and b:-");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=10;i++)
    {
        for(int j=a;j<=b;j++)
        {
            printf("%3d",i*j); //%d*%d=
        }
        printf("\n");
    }
    getch();
}