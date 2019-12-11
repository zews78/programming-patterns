#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=15;j++)
		{
			if(j<=i || j>=16-i)
			printf("*");
			
			else
			printf(" ");
		}
		printf("\n");
	}
	
	
	
	for(i=7;i>=1;i--)
	{
		for(j=1;j<=15;j++)
		{
			if(j<=i || j>=16-i)
			printf("*");
			
			else
			printf(" ");
		}
		printf("\n");
	}
}
