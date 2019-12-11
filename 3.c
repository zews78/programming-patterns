#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter the length of side of square");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==n)
			printf("*");
			
			else
			{
				if(j==1 || j==n)
				printf("*");
				
				else
				printf(" ");
			}
		}
		printf("\n");

		
	}
//	printf("%d",&n);
}
