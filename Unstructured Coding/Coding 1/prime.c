#include<stdio.h>
#include<conio.h>
void main()
	{
		int count=0;
		int no;
		printf("Enter no to check prime or not:- ");
	
	scanf("%d",&no);

	for(int i=1;i<=no;i++)
	{
	    if((no%i)==0)
	    {
	        count++;
	    }
	}
	if(count==2)
	{
	    	printf("prime");
	}
	else
	{
	    	printf("not prime");
	}
	}	
