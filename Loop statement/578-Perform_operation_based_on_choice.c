#include<stdio.h>
#include<conio.h>
void main()
{
    int no,res,ch,n;
    do
    {
        printf("\n1:Reverse \n2:Sum \n3:Count 4:Square\n");
        printf("Enter Choice:- ");
        scanf("%d",&ch);
        if(ch>0&&ch<5)
        { no=0;
           res=0;
        printf("\nEnter no:- ");
        scanf("%d",&no);
        }
            switch(ch)
            {
                case 1:   for(res=0;no>0;no=no/10)
                               res=res*10+(no%10);
                               break;
                case 2: for(res=0;no>0;no=no/10)
                           res=res+(no%10);
                           break;
                
                case 3: for(res=0;no>0;no=no/10)
                           res=res+1;
                           break;
                case 4: for(res=0;no>0;no=no/10)
                           res=res+(no%10)*(no%10);
                           break;
                 default: printf("\nInvalid Choice");
            }
            printf("Result:- %d\n",res);
        printf("For Continue Press 1-If Not Press 0:  ");
        scanf("%d",&n);
    }while(n==1);
getch();
}