#include<stdio.h>
main()
{
	int i,j,rows=11;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			if(j==i||j==rows+1-i)
			{
				printf("*");
				
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}
