#include<stdio.h>
#include<conio.h>
void main()
{
    char name[10];
    clearerr;
    scanf("%s",name);
    printf("%s",name);
getch();
//i/p tanay saxena    o/p tanay
//scanf  fn me data jabtak read hoga ,jabtak space found nhi 
//hota after space next words and letters are rejected or not read

//scanf fn me word ko space se seperate krna pssible nhi hai
//but get fn me word ko seperate karna possbile hai upto '\n'
}