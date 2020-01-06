#include<stdio.h>
#include<conio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);
exit();
int add(int no1,int no2)
{
return no1+no2;
}

int sub(int no1,int no2)
{
return no1-no2;
}

int mul(int no1,int no2)
{
return no1*no2;
}

float div(int no1,int no2)
{
return (float)no1/no2;
}

void main()
{
    int res,ch,x,y;
    float rs1;
    while(1)
    {
     printf("\n\tEnter Choice:-\n1: Add \n 2:Sub \n 3:Mul \n 4:Div \n 5:Exit\n");
     scanf("%d",&ch);
    
    switch(ch)
    {
         case 1:        
                    printf("\nEnter x and y:- ");
                    scanf("%d %d",&x,&y);
                    res=add(x,y);
                    printf("\nResult is %d",res);
                    break;
          case 2:
                    printf("\nEnter x and y:- ");
                    scanf("%d %d",&x,&y);
                    res=sub(x,y);
                    printf("\nResult is %d",res);
                    break;
          case 3: 
                    printf("\nEnter x and y:- ");
                    scanf("%d %d",&x,&y);
                    res=mul(x,y);
                    printf("\nResult is %d",res);
                    break;
          case 4: 
                     printf("\nEnter x and y:- ");
                    scanf("%d %d",&x,&y);
                    rs1=div(x,y);
                    printf("\nResult is %.2f",rs1);
                    break;
          case 5: exit(1);
          default: printf("Invalid Choice! Retry-");
          break;
    }
    
    }
getch();
}