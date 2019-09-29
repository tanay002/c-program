#include<stdio.h>
#include<conio.h>
void main()
{
int no,last,rev=0;
printf("Enter no:-");
scanf("%d",&no);

while(no)
{
    rev=rev*10+no%10;
    no=no/10;
}
while(rev)
{
    last=rev%10;
    rev=rev/10;

    switch(last)
    {
   case 1: printf("one ");
    break;
    case 2: printf("Two ");
    break;
    case 3: printf("three ");
    break;
    case 4: printf("four ");
    break;
    case 5: printf("five ");
    break;
    case 6: printf("six ");
    break;
    case 7: printf("seven ");
    break;
    case 8: printf("eight ");
    break;
case 9: printf("nine ");
    break; case 0: printf("zero ");
    break;

    }
}

}