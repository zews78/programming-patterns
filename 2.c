#include<stdio.h>
main()
{
	int i,j,n,k;
	printf("enter the height[no. of stars] of triangle");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=2*n+1;j++)
		{
			if(j<=i || j>=(2*n+2)-i)
			printf(" ");
			
			else
			{
				if(j>i+1 && j<(2*n+1)-i)
				{
					if(i==1)
					printf("*");
					
					else
					printf(" ");
				}
				
				else
				printf("*");
			}
			
		}
		printf("\n");
	}
}
