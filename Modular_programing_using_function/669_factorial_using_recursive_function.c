#include<stdio.h>
#include<conio.h>
int fact(int);
int res=1;
int fact(int no)
{ 
    if(no>1)
    {
        res=res*no;
        fact(no-1);
    }
    return res;
}
void main()
{ 
    int no;
    printf("Enter no:- ");
    scanf("%d",&no);
    int res=fact(no); 
    printf("Factorial of %d is %d",no,res);
 getch();
}