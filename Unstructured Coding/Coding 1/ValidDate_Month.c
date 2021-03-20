#include <stdio.h>

#include<conio.h>

void main()

{
 
   int day,m;

    printf("Enter day and month: ");
    
   scanf("%d %d",&day,&m);
    
  
 printf("%s",(m>=1&&m<=12)&&(day>=1&&day<=7)?"Valid day and month":"Invalid");

getch();
    

}