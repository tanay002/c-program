#include<stdio.h>
#include<conio.h>
float simpleInterest(int,int,int);
float simpleInterest(int p,int r,int t)
{ 
return (float)(p*r*t/100);
}
void main()
{ 
    int p,r,t;
    printf("Enter p,r,t:- ");
    scanf("%d %d %d",&p,&r,&t);
    float res=simpleInterest(p,r,t); 
    printf("Simple Interest is %.2f",res);
 getch();
}