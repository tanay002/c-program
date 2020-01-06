#include<stdio.h>
#include<conio.h>
#define Pie 3.14
int count=0;
float calculateArea(int);
float calculateArea(int r)
{ 
float res=Pie*r*r;
return res;
}
void main()
{ 
    int r;
    printf("Enter r:- ");
    scanf("%d",&r);
    float res=calculateArea(r); 
    printf("Area of circle is %.2f",res);

 getch();
}