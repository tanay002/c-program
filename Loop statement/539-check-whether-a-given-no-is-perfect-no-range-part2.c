#include<stdio.h>  //perfect no means 6=2+3+1;
#include<conio.h>
void main()
{
   long no,temp,fk=0,d,end;
printf("Enter start and end:-");
scanf("%d %d",&no,&end);
for(int j=no;j<=end;j++)
{
temp=j;
for(int i=1;i<j;i++)
{
if(j%i==0)   
{
    d=i;  //jo proper divisblle kar raha hai no ko,usko d me dal diya
}
fk=fk+d; //fir un no ko add kara ,jitne bhi no hai
d=0;  //reset karna jarrori hai nito purana no add hoga agar condition fail hogi to;
}
if(temp==fk)  //check karenge jitne bh divisible no ka sum hai wo main no hai kya ,if yes
    printf("%d is Perfect No \n",fk);//it is perfect square
fk=0;
}
    getch();
}