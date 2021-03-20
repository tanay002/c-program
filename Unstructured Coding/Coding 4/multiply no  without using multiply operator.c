#include<stdio.h>
 #include<conio.h>
void main()
{
      int p=0,a,b,count;
      printf("\nEnter First Number");
      scanf("%d",&a);
      printf("\nEnter Second Number");
      scanf("%d",&b);
      for(count=0;count<b;count++)
      {
            p=p+a;
      }
      printf("Product %d",p);
      getch();
}