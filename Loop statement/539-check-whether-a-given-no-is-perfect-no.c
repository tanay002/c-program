#include<stdio.h>  //perfect no means 6=2+3+1;
#include<conio.h>
void main()
{
    int no,temp,fk=0,d;
printf("Enter no:-");
scanf("%d",&no);
temp=no;
for(int i=1;i<no;i++)
{
if(no%i==0)   
{
    d=i;  //jo proper divisblle kar raha hai no ko,usko d me dal diya
}
fk=fk+d; //fir un no ko add kara ,jitne bhi no hai
d=0;  //reset karna jarrori hai nito purana no add hoga agar condition fail hogi to;
}
if(temp==fk)  //check karenge jitne bh divisible no ka sum hai wo main no hai kya ,if yes
    printf("Perfect No");//it is perfect square
else
    printf("Not Perfect");
    getch();
}