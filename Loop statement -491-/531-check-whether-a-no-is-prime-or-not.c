#include<stdio.h>
#include<conio.h>
void main()
{
int start,end;
printf("Enter start and end range:-");
scanf("%d %d",&start,&end);
for(int i=start;i<=end;i++)
{   
    for(int j=1;j<end;j++)
    {
    if(start%i==0)
    {
        count++;
    }

}
if(count==2)
    printf("%d number is Prime",no);
    else
    printf("%d number is not Prime",no);

}
getch();
}