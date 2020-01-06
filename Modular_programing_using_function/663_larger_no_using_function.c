#include<stdio.h>
#include<conio.h>
int largeNo(int,int);

int largeNo(int no1,int no2)
{ 
    if(no1!=no2)
return no1>no2?no1:no2;
}
void main()
{ 
    int no1,no2;
    printf("Enter no1 and no2:-");
    scanf("%d %d",&no1,&no2);
    int res=largeNo(no1,no2); 
    printf("%d is greater",res);
 getch();
}